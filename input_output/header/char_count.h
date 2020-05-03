#ifndef CHAR_COUNT_H
#define CHAR_COUNT_H

#include <stdio.h>
#include <ctype.h>
#include <malloc.h>

struct word_char {
    int char_count;
    int word_count;
};

struct word_char* get_count(FILE* fp);
FILE* change_case(FILE* fp, const char* filename);

#endif
