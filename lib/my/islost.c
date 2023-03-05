/*
** EPITECH PROJECT, 2023
** islost.c
** File description:
** check for lost condition
*/

#include "../../include/my.h"

static void isblocked(char **map, my_map_t *st, int i, int j)
{
    if ((map[i - 1][j] == '#' && map[i][j - 1] == '#') ||
        (map[i - 1][j] == '#' && map[i][j + 1] == '#') ||
        (map[i + 1][j] == '#' && map[i][j - 1] == '#') ||
        (map[i + 1][j] == '#' && map[i][j + 1] == '#')) {
        st->bcounter ++;
    }

    return;
}

static void boxchecker(char **map, my_map_t *st, int i)
{
    for (int j = 0; map[i][j] != '\0'; j ++)
        if (map[i][j] == 'X')
            isblocked(map, st, i, j);
    return;
}

int islost(char **map, my_map_t *st)
{
    for (int i = 0; map[i] != NULL; i ++)
        boxchecker(map, st, i);
    if (st->bcounter == st->counter)
        return 0;
    else
        st->bcounter = 0;
    return 1;
}
