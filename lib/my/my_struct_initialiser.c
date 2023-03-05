/*
** EPITECH PROJECT, 2023
** my_struct_initialiser.c
** File description:
** to initialise the struct
*/

#include "../../include/my.h"

static void line_parser(char *line, my_map_t *st, int i)
{
    for (int j = 0; line[j] != '\0'; j ++) {
        if (line[j] == 'P') {
            st->px = i;
            st->py = j;
        }
        if (line[j] == 'X') {
            st->nbx ++;
            st->counter ++;
        }
        if (line[i] == 'O')
            st->nbo ++;
    }
    return;
}

void my_struct_initialiser(char **map, my_map_t *st)
{
    st->bcounter = 0;
    st->counter = 0;
    st->index = 0;
    for (int i = 0; map[i] != NULL; i ++)
        line_parser(map[i], st, i);
    return;
}
