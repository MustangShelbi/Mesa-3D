#ifndef RNNDB_NVE4_COMPUTE_XML
#define RNNDB_NVE4_COMPUTE_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- rnndb/nve4_compute.xml (   4973 bytes, from 2012-04-22 14:48:46)
- ./rnndb/copyright.xml  (   6452 bytes, from 2011-08-11 18:25:12)
- ./rnndb/nvchipsets.xml (   3701 bytes, from 2012-03-22 20:40:59)
- ./rnndb/nv_object.xml  (  12861 bytes, from 2012-04-14 21:42:59)
- ./rnndb/nv_defs.xml    (   4437 bytes, from 2011-08-11 18:25:12)
- ./rnndb/nv50_defs.xml  (   5468 bytes, from 2011-08-11 18:25:12)

Copyright (C) 2006-2012 by the following authors:
- Artur Huillet <arthur.huillet@free.fr> (ahuillet)
- Ben Skeggs (darktama, darktama_)
- B. R. <koala_br@users.sourceforge.net> (koala_br)
- Carlos Martin <carlosmn@users.sf.net> (carlosmn)
- Christoph Bumiller <e0425955@student.tuwien.ac.at> (calim, chrisbmr)
- Dawid Gajownik <gajownik@users.sf.net> (gajownik)
- Dmitry Baryshkov
- Dmitry Eremin-Solenikov <lumag@users.sf.net> (lumag)
- EdB <edb_@users.sf.net> (edb_)
- Erik Waling <erikwailing@users.sf.net> (erikwaling)
- Francisco Jerez <currojerez@riseup.net> (curro)
- imirkin <imirkin@users.sf.net> (imirkin)
- jb17bsome <jb17bsome@bellsouth.net> (jb17bsome)
- Jeremy Kolb <kjeremy@users.sf.net> (kjeremy)
- Laurent Carlier <lordheavym@gmail.com> (lordheavy)
- Luca Barbieri <luca@luca-barbieri.com> (lb, lb1)
- Maarten Maathuis <madman2003@gmail.com> (stillunknown)
- Marcin Kościelnicki <koriakin@0x04.net> (mwk, koriakin)
- Mark Carey <mark.carey@gmail.com> (careym)
- Matthieu Castet <matthieu.castet@parrot.com> (mat-c)
- nvidiaman <nvidiaman@users.sf.net> (nvidiaman)
- Patrice Mandin <patmandin@gmail.com> (pmandin, pmdata)
- Pekka Paalanen <pq@iki.fi> (pq, ppaalanen)
- Peter Popov <ironpeter@users.sf.net> (ironpeter)
- Richard Hughes <hughsient@users.sf.net> (hughsient)
- Rudi Cilibrasi <cilibrar@users.sf.net> (cilibrar)
- Serge Martin
- Simon Raffeiner
- Stephane Loeuillet <leroutier@users.sf.net> (leroutier)
- Stephane Marchesin <stephane.marchesin@gmail.com> (marcheu)
- sturmflut <sturmflut@users.sf.net> (sturmflut)
- Sylvain Munaut <tnt@246tNt.com>
- Victor Stinner <victor.stinner@haypocalc.com> (haypo)
- Wladmir van der Laan <laanwj@gmail.com> (miathan6)
- Younes Manton <younes.m@gmail.com> (ymanton)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/



#define NVE4_COMPUTE_UPLOAD_SIZE				0x00000180

#define NVE4_COMPUTE_UPLOAD_UNK0184				0x00000184

#define NVE4_COMPUTE_UPLOAD_ADDRESS_HIGH			0x00000188

#define NVE4_COMPUTE_UPLOAD_ADDRESS_LOW				0x0000018c

#define NVE4_COMPUTE_UNK01A0					0x000001a0

#define NVE4_COMPUTE_UNK01A4					0x000001a4

#define NVE4_COMPUTE_UNK01A8					0x000001a8

#define NVE4_COMPUTE_UNK01AC					0x000001ac

#define NVE4_COMPUTE_UPLOAD_EXEC				0x000001b0

#define NVE4_COMPUTE_UPLOAD_DATA				0x000001b4

#define NVE4_COMPUTE_SHARED_BASE				0x00000214

#define NVE4_COMPUTE_UNK0280					0x00000280

#define NVE4_COMPUTE_UNK02B0					0x000002b0

#define NVE4_COMPUTE_LAUNCH_DESC_ADDRESS			0x000002b4
#define NVE4_COMPUTE_LAUNCH_DESC_ADDRESS__SHR			8

#define NVE4_COMPUTE_UNK02B8					0x000002b8

#define NVE4_COMPUTE_LAUNCH					0x000002bc

#define NVE4_COMPUTE_UNK02E4					0x000002e4

#define NVE4_COMPUTE_UNK02E8					0x000002e8

#define NVE4_COMPUTE_UNK02EC					0x000002ec

#define NVE4_COMPUTE_UNK02F0					0x000002f0

#define NVE4_COMPUTE_UNK02F4					0x000002f4

#define NVE4_COMPUTE_UNK02F8					0x000002f8

#define NVE4_COMPUTE_UNK0310					0x00000310

#define NVE4_COMPUTE_LOCAL_BASE					0x0000077c

#define NVE4_COMPUTE_TEMP_ADDRESS_HIGH				0x00000790

#define NVE4_COMPUTE_TEMP_ADDRESS_LOW				0x00000794

#define NVE4_COMPUTE_TSC_ADDRESS_HIGH				0x0000155c

#define NVE4_COMPUTE_TSC_ADDRESS_LOW				0x00001560

#define NVE4_COMPUTE_TSC_LIMIT					0x00001564

#define NVE4_COMPUTE_TIC_ADDRESS_HIGH				0x00001574

#define NVE4_COMPUTE_TIC_ADDRESS_LOW				0x00001578

#define NVE4_COMPUTE_TIC_LIMIT					0x0000157c

#define NVE4_COMPUTE_CODE_ADDRESS_HIGH				0x00001608

#define NVE4_COMPUTE_CODE_ADDRESS_LOW				0x0000160c

#define NVE4_COMPUTE_FLUSH					0x00001698
#define NVE4_COMPUTE_FLUSH_CODE					0x00000001
#define NVE4_COMPUTE_FLUSH_GLOBAL				0x00000010
#define NVE4_COMPUTE_FLUSH_UNK8					0x00000100
#define NVE4_COMPUTE_FLUSH_CB					0x00001000

#define NVE4_COMPUTE_QUERY_ADDRESS_HIGH				0x00001b00

#define NVE4_COMPUTE_QUERY_ADDRESS_LOW				0x00001b04

#define NVE4_COMPUTE_QUERY_SEQUENCE				0x00001b08

#define NVE4_COMPUTE_QUERY_GET					0x00001b0c
#define NVE4_COMPUTE_QUERY_GET_MODE__MASK			0x00000003
#define NVE4_COMPUTE_QUERY_GET_MODE__SHIFT			0
#define NVE4_COMPUTE_QUERY_GET_MODE_WRITE			0x00000000
#define NVE4_COMPUTE_QUERY_GET_MODE_WRITE_INTR_UNK1		0x00000003
#define NVE4_COMPUTE_QUERY_GET_INTR				0x00100000
#define NVE4_COMPUTE_QUERY_GET_SHORT				0x10000000

#define NVE4_COMPUTE_TEX_CB_INDEX				0x00002608

#define NVE4_COMPUTE_UNK260c					0x0000260c

#define NVE4_COMPUTE_LAUNCH_DESC__SIZE				0x00000100
#define NVE4_COMPUTE_LAUNCH_DESC_PROG_START			0x00000020

#define NVE4_COMPUTE_LAUNCH_DESC_12				0x00000030
#define NVE4_COMPUTE_LAUNCH_DESC_12_GRIDDIM_X__MASK		0x7fffffff
#define NVE4_COMPUTE_LAUNCH_DESC_12_GRIDDIM_X__SHIFT		0

#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ			0x00000034
#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ_Y__MASK		0x0000ffff
#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ_Y__SHIFT		0
#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ_Z__MASK		0xffff0000
#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ_Z__SHIFT		16

#define NVE4_COMPUTE_LAUNCH_DESC_17				0x00000044
#define NVE4_COMPUTE_LAUNCH_DESC_17_SHARED_ALLOC__MASK		0x0000ffff
#define NVE4_COMPUTE_LAUNCH_DESC_17_SHARED_ALLOC__SHIFT		0

#define NVE4_COMPUTE_LAUNCH_DESC_18				0x00000048
#define NVE4_COMPUTE_LAUNCH_DESC_18_BLOCKDIM_X__MASK		0xffff0000
#define NVE4_COMPUTE_LAUNCH_DESC_18_BLOCKDIM_X__SHIFT		16

#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ			0x0000004c
#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ_Y__MASK		0x0000ffff
#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ_Y__SHIFT		0
#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ_Z__MASK		0xffff0000
#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ_Z__SHIFT		16

#define NVE4_COMPUTE_LAUNCH_DESC_20				0x00000050
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT__MASK		0x60000000
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT__SHIFT		29
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT_16K_SHARED_48K_L1	0x20000000
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT_32K_SHARED_32K_L1	0x40000000
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT_48K_SHARED_16K_L1	0x60000000

#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0(i0)	       (0x00000074 + 0x8*(i0))
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0__ESIZE		0x00000008
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0__LEN		0x00000008
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0_ADDRESS_LOW__MASK	0xffffffff
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0_ADDRESS_LOW__SHIFT	0

#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1(i0)	       (0x00000078 + 0x8*(i0))
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1__ESIZE		0x00000008
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1__LEN		0x00000008
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1_ADDRESS_HIGH__MASK	0x000000ff
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1_ADDRESS_HIGH__SHIFT	0
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1_SIZE__MASK		0xffff8000
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1_SIZE__SHIFT	15

#define NVE4_COMPUTE_LAUNCH_DESC_46				0x000000b8
#define NVE4_COMPUTE_LAUNCH_DESC_46_LOCAL_POS_ALLOC__MASK	0x000fffff
#define NVE4_COMPUTE_LAUNCH_DESC_46_LOCAL_POS_ALLOC__SHIFT	0
#define NVE4_COMPUTE_LAUNCH_DESC_46_GPR_ALLOC__MASK		0x3f000000
#define NVE4_COMPUTE_LAUNCH_DESC_46_GPR_ALLOC__SHIFT		24


#endif /* RNNDB_NVE4_COMPUTE_XML */