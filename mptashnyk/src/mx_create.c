#include "../inc/header.h"

rain *mx_create(int column) {
    rain *t = (rain *)malloc(sizeof(rain));
    t->start = -((rand() % (30 - 6 + 1)) + 6);
    t->end = -((rand() % (20 - 2 + 1)) + 2) + t->start;
    t->column = column;
    t->cr_new = false;
    return t;
}

