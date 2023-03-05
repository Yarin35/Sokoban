/*
** EPITECH PROJECT, 2023
** my_game.c
** File description:
** my sokoban game
*/

#include "../../include/my.h"

int my_game(char **map, my_map_t *st)
{
    my_struct_initialiser(map, st);
    initscr();
    keypad(stdscr, TRUE);
    noecho();
    while (1) {
        clear();
        game_checker(map, st);
        if (iswin(st) == 0)
            break;
        for (int i = 0; map[i] != NULL; i ++)
            mvprintw(LINES / 2 + i, COLS / 2, map[i]);
        refresh();
        my_interactions(getch(), map, st);
        if (islost(map, st) == 0)
            return 1;
    }
    return 0;
}
