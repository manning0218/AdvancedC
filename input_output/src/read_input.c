#include "read_input.h"

#include <ctype.h>
#include <string.h>

void print_strings_with_char(FILE* fp, int ch) {
    size_t sz = 125;
    char *buf = (char*) malloc(sz*sizeof(char));

    while(getline(&buf, &sz, fp) >= 0) {
        if(strchr(buf, tolower(ch)) || strchr(buf, toupper(ch))) {
            printf("%s\n", buf);
        }
    }
}
