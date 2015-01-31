/* Picasso - a vector graphics library
 * 
 * Copyright (C) 2009 Zhang Ji Peng
 * Contact: onecoolx@gmail.com
 */

#ifndef _PICASSO_GLOBAL_H_
#define _PICASSO_GLOBAL_H_

#include "core/common.h"
#include "core/device.h"
#include "core/math_type.h"
#include "core/data_vector.h"
#include "core/fixedopt.h"

#ifndef PICASSO_LIB
#  define PICASSO_LIB
#endif
#include "picasso.h"

//this can be replace by hw buffer!
#define BufferAlloc(n)         mem_malloc(n)
#define BuffersAlloc(n, s)     mem_calloc(n, s)
#define BufferFree(p)         mem_free(p)
#define BufferCopy(d, s, n)     memcpy(d, s, n)

#define MAX(x, y)    (((x) > (y))?(x):(y))
#define MIN(x, y)    (((x) < (y))?(x):(y))
#define ABS(x)        (((x) < 0)?(-(x)):(x))


// global error code
extern "C" PIC_API ps_status picasso_status;

#endif /*_PICASSO_GLOBAL_H_*/
