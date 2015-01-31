/* Picasso - a vector graphics library
 * 
 * Copyright (C) 2013 Zhang Ji Peng
 * Contact: onecoolx@gmail.com
 */

#ifndef _PICASSO_MASK_H_
#define _PICASSO_MASK_H_

#include "core/common.h"
#include "core/interfaces.h"
#include "gfx/gfx_mask_layer.h"

namespace picasso {

class mask_layer
{
public:
    mask_layer(void* buf, unsigned int width, unsigned int height, int stride, int type = gfx::MASK_ALPHA);
    ~mask_layer();
public:
    void attach(void* buf, unsigned int width, unsigned int height, int stride);

    void set_mask_type(int type);
    void add_filter_color(const rgba& c);
    void clear_filter_colors(void);

    abstract_mask_layer* impl(void) const { return m_impl; }
private:
    mask_layer(const mask_layer&);
    mask_layer& operator=(const mask_layer&);
    abstract_mask_layer* m_impl;
};

}
#endif /*_PICASSO_MASK_H_*/
