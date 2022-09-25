#include "../inc/header.h"

void mx_print_text(char * text, int y, int x) {
    for (int i = 0; text[i] != '\0'; i++) {
        char b[2] =  "\0";
        b[0] = text[i];
        mvprintw(y, x + i, b);
        refresh();
        usleep(90000);
    }
}

