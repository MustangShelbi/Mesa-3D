
#ifndef NVE4_COMPUTE_H
#define NVE4_COMPUTE_H

#include "nv50/nv50_defs.xml.h"
#include "nve4_compute.xml.h"

static inline boolean
nve4_pipe_surface_as_constbuf(struct pipe_surface *sf)
{
   return sf && sf->format == PIPE_FORMAT_NONE && !sf->writable;
}

/* Input space is implemented as c0[], to which we bind the screen->parm bo.
 */
#define NVE4_CP_INPUT_USER        0x0000
#define NVE4_CP_INPUT_USER_LIMIT  0x1000
#define NVE4_CP_INPUT_TEX(i)     (0x1020 + (i) * 4)
#define NVE4_CP_INPUT_TEX_STRIDE  4
#define NVE4_CP_INPUT_TEX_MAX     32
#define NVE4_CP_INPUT_SUF(i)     (0x10c0 + (i) * 4)
#define NVE4_CP_INPUT_SUF_STRIDE  32
#define NVE4_CP_INPUT_SUF_MAX     32
#define NVE4_CP_INPUT_SIZE_MAX    0x1500

struct nve4_cp_launch_desc
{
   u32 unk0[8];
   u32 entry;
   u32 unk9[3];
   u32 griddim_x    : 31;
   u32 unk12        : 1;
   u16 griddim_y;
   u16 griddim_z;
   u32 unk14[3];
   u16 shared_size; /* must be aligned to 0x100 */
   u16 unk15;
   u16 unk16;
   u16 blockdim_x;
   u16 blockdim_y;
   u16 blockdim_z;
   u32 cb_mask      : 8;
   u32 unk20_8      : 21;
   u32 cache_split  : 2;
   u32 unk20_31     : 1;
   u32 unk21[8];
   struct {
      u32 address_l;
      u32 address_h : 8;
      u32 reserved  : 7;
      u32 size      : 17;
   } cb[8];
   u32 unk45;
   u32 local_size_p : 20;
   u32 unk46_20     : 4;
   u32 gpr_alloc    : 8;
   u32 unk47[17];
};

STATIC_ASSERT(offsetof(nve4_cp_launch_desc, cb[1]) == 0x84);

#define NVE4_COMPUTE_UPLOAD_EXEC_UNKVAL_DATA 0x41
#define NVE4_COMPUTE_UPLOAD_EXEC_UNKVAL_DESC 0x11
#define NVE4_COMPUTE_UPLOAD_UNK0184_UNKVAL   0x1

static INLINE void
nve4_cp_launch_desc_init_default(struct nve4_cp_launch_desc *desc)
{
   memset(desc, 0, sizeof(*desc));

   desc->unk0[7]  = 0xbc000000;
   desc->unk9[1]  = 0x44014000;
   desc->unk47[0] = 0x30002000;
}

static INLINE void
nve4_cp_launch_desc_set_cb(struct nve4_cp_launch_desc *desc,
                           unsigned index,
                           struct nouveau_bo *bo,
                           uint32_t base, uint16_t size)
{
   uint64_t address = bo->offset + base;

   assert(index < 8);
   assert(!(base & 0xff));
   assert(size <= 65536);

   desc->cb[index].address_l = address;
   desc->cb[index].address_h = address >> 32;
   desc->cb[index].size = size;

   desc->cb_mask |= 1 << index;
}

static INLINE void
nve4_cp_launch_desc_set_ctx_cb(struct nve4_cp_launch_desc *desc,
                               unsigned index,
                               const struct nvc0_constbuf *cb)
{
   assert(index < 8);

   if (!cb->u.buf) {
      desc->cb_mask &= ~(1 << index);
   } else {
      const struct nv04_resource *buf = nv04_resource(cb->u.buf);
      assert(!cb->user);
      nve4_cp_launch_desc_set_cb(desc, index,
                                 buf->bo, buf->offset + cb->offset, cb->size);
   }
   
}

#endif /* NVE4_COMPUTE_H */
