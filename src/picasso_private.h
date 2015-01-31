/* Picasso - a vector graphics library
 * 
 * Copyright (C) 2012 Zhang Ji Peng
 * Contact: onecoolx@gmail.com
 */

#ifndef _PICASSO_PRIVATE_H_
#define _PICASSO_PRIVATE_H_

#include "core/convert.h"
#include "picasso.h"

namespace picasso {

class graphic_path;

// Font
ps_font* _default_font(void);

// Path
void _path_operation(conv_clipper::clip_op op, const graphic_path& a, const graphic_path& b, graphic_path& r);

// Format
int _void_pre_color(ps_color_format fmt);
}

// Font Load
bool platform_font_init(void);

void platform_font_shutdown(void);

#endif/*_PICASSO_PRIVATE_H_*/
