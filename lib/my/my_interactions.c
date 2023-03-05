/*
** EPITECH PROJECT, 2023
** my_interactions.c
** File description:
** gameplay commands
*/

#include "../../include/my.h"

static void moov_up(char **map, my_map_t *st)
{
    if (map[st->px - 1][st->py] == ' ' || map[st->px - 1][st->py] == 'O') {
        map[st->px - 1][st->py] = 'P';
        map[st->px][st->py] = ' ';
        st->px --;
        return;
    }
    if ((map[st->px - 1][st->py] == 'X' && map[st->px - 2][st->py] == ' ') ||
        (map[st->px - 1][st->py] == 'X' && map[st->px - 2][st->py] == 'O')) {
        map[st->px - 2][st->py] = 'X';
        map[st->px - 1][st->py] = 'P';
        map[st->px][st->py] = ' ';
        st->px --;
        return;
    }
}

static void moov_down(char **map, my_map_t *st)
{
    if (map[st->px + 1][st->py] == ' ' || map[st->px + 1][st->py] == 'O') {
        map[st->px + 1][st->py] = 'P';
        map[st->px][st->py] = ' ';
        st->px ++;
        return;
    }
    if ((map[st->px + 1][st->py] == 'X' && map[st->px + 2][st->py] == ' ' ) ||
        (map[st->px + 1][st->py] == 'X' && map[st->px + 2][st->py] == 'O')) {
        map[st->px + 2][st->py] = 'X';
        map[st->px + 1][st->py] = 'P';
        map[st->px][st->py] = ' ';
        st->px ++;
        return;
    }
}

static void moov_left(char **map, my_map_t *st)
{
    if (map[st->px][st->py - 1] == ' ' || map[st->px][st->py - 1] == 'O') {
        map[st->px][st->py - 1] = 'P';
        map[st->px][st->py] = ' ';
        st->py --;
        return;
    }
    if ((map[st->px][st->py - 1] == 'X' && map[st->px][st->py - 2] == ' ') ||
        (map[st->px][st->py - 1] == 'X' && map[st->px][st->py - 2] == 'O')) {
        map[st->px][st->py - 2] = 'X';
        map[st->px][st->py - 1] = 'P';
        map[st->px][st->py] = ' ';
        st->py --;
        return;
    }
}

static void moov_right(char **map, my_map_t *st)
{
    if (map[st->px][st->py + 1] == ' ' || map[st->px][st->py + 1] == 'O') {
        map[st->px][st->py + 1] = 'P';
        map[st->px][st->py] = ' ';
        st->py ++;
        return;
    }
    if ((map[st->px][st->py + 1] == 'X' && map[st->px][st->py + 2] == ' ') ||
        (map[st->px][st->py + 1] == 'X' && map[st->px][st->py + 2] == 'O')) {
        map[st->px][st->py + 2] = 'X';
        map[st->px][st->py + 1] = 'P';
        map[st->px][st->py] = ' ';
        st->py ++;
        return;
    }
}

int my_interactions(int tile, char **map, my_map_t *st)
{
    switch (tile) {
    case KEY_UP: moov_up(map, st); return 0;
    case KEY_DOWN: moov_down(map, st); return 0;
    case KEY_LEFT: moov_left(map, st); return 0;
    case KEY_RIGHT: moov_right(map, st); return 0;
    case '0': free_game(map, st); break;
    case ' ': reset_map(map, st); return 0;
    default: return 0;
    }
    return 0;
}
