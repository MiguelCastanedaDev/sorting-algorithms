//
// Created by Miguel Castaneda on 10/02/2023.
//

#ifndef SORTING_ALGORITHMS_POINTER_H
#define SORTING_ALGORITHMS_POINTER_H

#endif //SORTING_ALGORITHMS_POINTER_H
#include <iostream>

#ifdef __WIN32
#include <windows.h>
#else
#include <ncurses.h>
#endif

void (*move_cursor)(int, int); // Declaramos un puntero a función que se llame move_cursor

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void move(int x, int y) {
    move(x, y);
}

void setup_cursor_movement() {
    #ifdef __WIN32
        move_cursor = &gotoxy;
    #else
        move_cursor = &move;
    #endif
}