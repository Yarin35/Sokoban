/*
** EPITECH PROJECT, 2023
** free_game.c
** File description:
** to free the game
*/

#include "../../include/my.h"

int free_game(char **map, my_map_t *st)
{
    endwin();
    for (int i = 0; map[i] != NULL; i ++) {
        free(map[i]);
        free(st->save[i]);
    }
    free(map);
    free(st->save);
    free(st);
    return 0;
}
