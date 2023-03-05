/*
** EPITECH PROJECT, 2023
** reset_map.c
** File description:
** reset the map
*/

#include "../../include/my.h"

static void lookforp(char *line, my_map_t *st, int i)
{
    for (int y = 0; line[y] != '\0'; y ++)
        if (line[y] == 'P') {
            st->px = i;
            st->py = y;
        }
    return;
}

void reset_map(char **map, my_map_t *st)
{
    for (int i = 0; map[i] != NULL; i ++)
        my_strcpy(map[i], st->save[i]);
    for (int i = 0; map[i] != NULL; i ++)
        lookforp(map[i], st, i);
    return;
}
