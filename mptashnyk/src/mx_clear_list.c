#include "../inc/header.h"

void mx_clear_list(t_list **list) {
    while(*list != NULL) {
        t_list *temp = (*list)->next;
        rain *t = ((rain *)(*list)->data);
        free(t);
        free((*list));
        *list = temp;
    }
}

