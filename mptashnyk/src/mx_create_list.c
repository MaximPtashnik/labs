#include "../inc/header.h"

t_list *mx_create_list(int max_x) {
    rain *t = mx_create(0);
    t_list *temp = mx_create_node(t);
    for (int i = 1; i < max_x; i++) {
        t = mx_create(i);
        mx_push_back(&temp, t);
    }
    return temp;
}

