#include "bit_field.h"

static struct onscreen_box box;

static const char* colors[8] = {"black\0", "red\0", "green\0", "yellow\0", "blue\0", "magenta\0", "cyan\0", "white\0"};
static const char* border_styles[3] = {"solid\0", "dotted\0", "dashed\0"};

struct onscreen_box initialize() {
    box.opaque = 0;
    box.fill_color = 0;
    box.show_border = 1;
    box.border_color = 7;
    box.border_style = 0;

    return box;
}

void modify_box(struct onscreen_box mod_box) {
    box.opaque = mod_box.opaque;
    box.fill_color = mod_box.fill_color;
    box.show_border = mod_box.show_border;
    box.border_color = mod_box.border_color;
    if(box.border_style <= 3) {
        box.border_style = mod_box.border_style;
    }
}

void print_box() {
    if(box.opaque) {
        printf("Box is opaque.\n"); 
    } else {
        printf("Box is transparent.\n");
    }

    printf("The fill color is %s.\n", colors[box.fill_color]);
    
    if(box.show_border) {
        printf("Border shown.\n");
        printf("The border color is %s.\n", colors[box.border_color]);
        printf("The border style is %s.\n", border_styles[box.border_style]);
    } else {
        printf("Border not shown.\n");
    }
}
