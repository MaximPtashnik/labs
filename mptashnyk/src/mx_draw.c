#include "../inc/header.h"


void mx_draw(rain *r, int max_y, int mod, int color) {
    if (r->end >= max_y) return;
    if (r->start >= 0 && r->start < max_y) {
        attron(COLOR_PAIR(color));
        mvprintw(r->start, r->column, r->symbol);
    }
    r->start++;
    if (r->start >= 0 && r->start < max_y) {
        if (mod == 0) {
            char b[2] = "\0";
            b[0] = mx_get_rand_char();
            r->symbol = b;
        }
        if (mod == 1) r->symbol = mx_get_rand_rune();
        attron(COLOR_PAIR(1));
        mvwprintw(stdscr, r->start, r->column, r->symbol);
    }
    r->end++;
    if (r->end >= 0 && r->end < max_y) {
        attron(COLOR_PAIR(2));
        mvprintw(r->end, r->column, " ");
    }
}

