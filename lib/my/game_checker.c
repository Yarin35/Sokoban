/*
** EPITECH PROJECT, 2023
** game_checker.c
** File description:
** game checker
*/

#include "../../include/my.h"

static void linechecker(char **map, my_map_t *st, int i)
{
    for (int j = 0; map[i][j] != '\0'; j ++) {
        if (st->save[i][j] == 'O' && map[i][j] == ' ')
            map[i][j] = 'O';
        if (st->save[i][j] == 'O' && map[i][j] == 'X')
            st->index ++;
    }
}

int game_checker(char **map, my_map_t *st)
{
    for (int i = 0; map[i] != NULL; i ++)
        linechecker(map, st, i);
    return 0;
}
