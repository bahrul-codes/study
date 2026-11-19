#include <ncurses.h>

int main() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    mvprintw(1, 2, "Contoh ncurses berjalan di WSL");
    mvprintw(3, 2, "Tekan tombol panah atau q untuk keluar.");
    refresh();

    int key;
    do {
        key = getch();    
    } while (key != 'q' && key != 'Q');

    endwin();
    return 0;
}   