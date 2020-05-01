#ifndef BIT_FIELD_H
#define BIT_FIELD_H

#include <stdio.h>

struct onscreen_box {
    unsigned int opaque:1;
    unsigned int fill_color:3;
    unsigned int :4;
    unsigned int show_border:1;
    unsigned int border_color:3;
    unsigned int border_style:2;
};

struct onscreen_box initialize();

void modify_box(struct onscreen_box mod_box);

void print_box();

#endif
