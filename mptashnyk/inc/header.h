#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>
#include <locale.h>

typedef struct rain_t {
    int column;
    bool cr_new; 
    int start;
    int end;
    char *symbol;
}              rain;

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

char mx_get_rand_char(void);
char *mx_get_rand_rune(void);
rain *mx_create(int column);
t_list *mx_create_node(void *data);
t_list *mx_create_list(int max_x);
void mx_push_back(t_list **list, void *data);
void mx_draw(rain *r, int max_y, int mod, int color);
void mx_printerr(const char *s);
void mx_clear(t_list **list, int max_y);
void mx_clear_list(t_list **list);
void mx_draw_list(t_list **list, int max_y, int mod, int color);
void mx_wake_up(int max_x, int max_y);
void mx_print_text(char * text, int y, int x);
int mx_strlen(const char *s);

#endif

