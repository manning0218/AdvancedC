#include "char_count.h"
#include "read_input.h"

#include <stdio.h>

int main(int argc, char** argv) {
    struct word_char* wc_count = NULL;

    if(argc == 2) {
        FILE* fp = fopen(argv[1], "r");
        wc_count = get_count(fp);
        rewind(fp);
        fp = change_case(fp, argv[1]);
        fclose(fp);
    } else if(argc == 3) {
        FILE* fp = fopen(argv[1], "r");
        char ch = argv[2][0];
        print_strings_with_char(fp, ch);
        fclose(fp);
    } else {
        wc_count = get_count(stdin);
    }


    if(wc_count) {
        printf("Words: %d, Chars: %d\n", wc_count->word_count, wc_count->char_count);
        free(wc_count);
        wc_count = NULL;
    }

    return 0;
}
