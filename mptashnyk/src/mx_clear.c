#include "../inc/header.h"

void mx_clear(t_list **list, int max_y) {
    t_list *t = *list;
    while (t != NULL) {
        if (((rain *)t->data)->end == 1 && !((rain *)t->data)->cr_new) {
            ((rain *)t->data)->cr_new = true;
            mx_push_back(list, mx_create(((rain *)t->data)->column));
        }
        if (((rain *)t->data)->end > max_y) {
            t_list *tmp = t;
            t = t->next;
            rain *t2 = ((rain *)tmp->data);
            free(t2);
            free(tmp);
        }
        else {
            t = t->next;
        }
    }
}

