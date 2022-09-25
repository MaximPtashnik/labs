#include "../inc/header.h"

void mx_draw_list(t_list **list, int max_y, int mod, int color) {
    t_list *t = *list;

    while (t != NULL) {
        mx_draw(t->data, max_y, mod, color);
        t = t->next;
    }
    mx_clear(list, max_y);
}

