/*
 * Copyright (c) 2017 Etnaviv Project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sub license,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
/** Kernel ABI definition file for Etna **/
#ifndef H_GCABI
#define H_GCABI

#define GCABI_HAS_NO_FEATURE_BITS
#define GCABI_HAS_CHIPFLAGS
#define GCABI_HAS_PRODUCTID
#define GCABI_HAS_ECOID
#define GCABI_HAS_CUSTOMERID

// One of these must be set:
//#define GCABI_HAS_CONTEXT
#define GCABI_HAS_STATE_DELTAS

// Interface structure has hardware type (core id)
#define GCABI_HAS_HARDWARE_TYPE
// Interface structure has "engine" field
#define GCABI_HAS_ENGINE

// Command buffers have physical address and size
#define GCABI_CMDBUF_HAS_PHYSICAL
// Command buffers have an explicit reserved tail
#define GCABI_CMDBUF_HAS_RESERVED_TAIL

// Chip identity has pixelPipes, instructionCount, numConstants, bufferSize
#define GCABI_CHIPIDENTITY_EXT
// Chip identity has varyings and layout style
#define GCABI_CHIPIDENTITY_VARYINGS

#define GCABI_UINT64_POINTERS
#define GCABI_UINT64_IOCTL_DATA

/* Became ReleaseVideoMemory */
#define GCABI_NO_FREE_VIDEO_MEMORY
/* Commits contain multiple command buffers */
#define GCABI_MULTI_COMMIT
/* Don't mmap but use gcvHAL_MAP_MEMORY */
#define GCABI_NO_MMAP
/* Use virtual command buffers, not contiguous memory */
#define GCABI_VIRTUAL_COMMAND_BUFFERS

/* Surface types */
#define GCABI_HAS_SURF_ICACHE
#define GCABI_HAS_SURF_TXDESC

/* IOCTL structure for userspace driver*/
typedef struct
{
    unsigned long long in_buf;
    unsigned long long in_buf_size;
    unsigned long long out_buf;
    unsigned long long out_buf_size;
} vivante_ioctl_data_t;

#include "gc_hal_base.h"
#include "gc_hal.h"
#include "gc_hal_driver.h"
#include "gc_hal_types.h"
#include "gc_hal_kernel_buffer.h"
#endif
