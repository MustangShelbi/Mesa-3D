#ifndef __NOUVEAU_CONTEXT_H__
#define __NOUVEAU_CONTEXT_H__

#include "pipe/p_context.h"

#define NOUVEAU_MAX_SCRATCH_BUFS 4

struct nouveau_pushbuf;

struct nv04_resource;

struct nouveau_context {
   struct pipe_context pipe;
   struct nouveau_screen *screen;

   struct nouveau_pushbuf *pushbuf;

   boolean vbo_dirty;
   boolean cb_dirty;

   void (*copy_data)(struct nouveau_context *,
                     struct nouveau_bo *dst, unsigned, unsigned,
                     struct nouveau_bo *src, unsigned, unsigned, unsigned);
   void (*push_data)(struct nouveau_context *,
                     struct nouveau_bo *dst, unsigned, unsigned,
                     unsigned, const void *);
   /* base, size refer to the whole constant buffer */
   void (*push_cb)(struct nouveau_context *,
                   struct nouveau_bo *, unsigned domain,
                   unsigned base, unsigned size,
                   unsigned offset, unsigned words, const uint32_t *);

   struct {
      uint8_t *map;
      unsigned id;
      unsigned wrap;
      unsigned offset;
      unsigned end;
      struct nouveau_bo *bo[NOUVEAU_MAX_SCRATCH_BUFS];
      struct nouveau_bo *current;
      struct nouveau_bo **runout;
      unsigned nr_runout;
      unsigned bo_size;
   } scratch;
};

static INLINE struct nouveau_context *
nouveau_context(struct pipe_context *pipe)
{
   return (struct nouveau_context *)pipe;
}

void
nouveau_context_init_vdec(struct nouveau_context *);

/* Copy data to a scratch buffer, update buffer address.
 * Returns the bo the data resides in, or NULL on failure.
 */
struct nouveau_bo *
nouveau_scratch_data(struct nouveau_context *,
                     struct nv04_resource *, unsigned base, unsigned size);

/* Release runout buffers. */
void
nouveau_scratch_runout_release(struct nouveau_context *);

/* This is needed because we don't hold references outside of context::scratch,
 * because we don't want to un-bo_ref each allocation every time. This is less
 * work, and we need the wrap index anyway for extreme situations.
 */
static INLINE void
nouveau_scratch_done(struct nouveau_context *nv)
{
   nv->scratch.wrap = nv->scratch.id;
   if (unlikely(nv->scratch.nr_runout))
      nouveau_scratch_runout_release(nv);
}

/* Get pointer to scratch buffer.
 * The returned nouveau_bo is only referenced by the context, don't un-ref it !
 */
void *
nouveau_scratch_get(struct nouveau_context *, unsigned size, uint64_t *gpu_addr,
                    struct nouveau_bo **);

#endif
