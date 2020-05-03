#include "char_count.h"

struct word_char* get_count(FILE* fp) {
    struct word_char* wc_count = (struct word_char*) malloc(sizeof(struct word_char));

    wc_count->char_count = 0, wc_count->word_count = 0;

    if(fp) {
        int ch;
        int prev = '\0';
        while((ch = getc(fp)) != EOF) {
            if(isspace(ch) && (!isspace(prev) || prev != '\0' || prev == '\n')) { 
                wc_count->word_count++;
            } else if(!isspace(ch)) {
                wc_count->char_count++;
            }

            prev = ch;
        }
    }

    return wc_count;
}

FILE* change_case(FILE* fp, const char* filename) {
    FILE *tmp = fopen("change_case.txt", "w");

    int ch;
    while((ch = fgetc(fp)) != EOF) {
        if(isupper(ch)) {
            fputc(tolower(ch), tmp);
        } else {
            fputc(toupper(ch), tmp);
        }
    }

    fclose(fp);
    remove(filename);
    rename("change_case.txt", filename);

    return tmp;
}
