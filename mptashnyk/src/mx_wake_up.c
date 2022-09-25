#include "../inc/header.h"

void mx_wake_up(int max_x, int max_y) {
    char l1[13] = "Wake up, Neo";
    char l2[15] = "Matrix has you";
    mx_print_text(l1, max_y / 2 - 1, (max_x - 13) / 2);
    mx_print_text(l2, max_y / 2, (max_x-15) /2);
    usleep(600000);
    clear();
}

