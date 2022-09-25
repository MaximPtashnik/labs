#include "../inc/header.h"


int main(int argc, char *argv[]) {
    if(argv[0]) {}
    if (argc != 1) {
        mx_printerr("usage: ./marix_rain\n");
        mx_printerr("At runtime press:\n0 -- ascii characters.\n1 -- runes.\n+ -- speed up\n- -- slow down\n");
        mx_printerr("r -- set color red\ng -- set color green\nb -- set color blue\nq -- exit\n");
        exit(0);
    }
    int max_x = 0;
    int max_y = 0;
    int key = 0;
    int mod = 0;
    int color = 3;
    int delay = 30000;
    time_t seed;

    setlocale(LC_ALL, "");

    initscr();
    start_color();
    nodelay(stdscr, TRUE);
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_BLACK, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    init_pair(4, COLOR_RED, COLOR_BLACK);
    init_pair(5, COLOR_BLUE, COLOR_BLACK);
    curs_set(FALSE);
    nodelay(stdscr, TRUE);
    getmaxyx(stdscr, max_y, max_x);
    srand((unsigned) time(&seed));
    t_list *list = mx_create_list(max_x);

    mx_wake_up(max_x, max_y);
    while(1) {
        key = getch();
        if (key == 'q') break;
        if (key == '0') mod = 0;
        if (key == '1') mod = 1;
        if (key == 'g') color = 3;
        if (key == 'r') color = 4;
        if (key == 'b') color = 5;
        if (key == '+' && delay >= 1000) delay -= 1000;
        if (key == '-') delay += 1000;

        mx_draw_list(&list, max_y, mod, color);
        refresh();
        usleep(delay);
    }
    
    mx_clear_list(&list);
    endwin();
    return 0;
}

