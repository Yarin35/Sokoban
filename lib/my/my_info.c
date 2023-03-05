/*
** EPITECH PROJECT, 2022
** my_info.c
** File description:
** -h
*/
#include "../../include/my.h"

int my_info(void)
{
    my_putstr("USAGE\n    ./my_sokoban map\nDESCRIPTION\n");
    my_putstr("    map  file representing the warehouse map, containing '#' ");
    my_putstr("for walls,\n         'P' for the player, 'X' for boxes and 'O'");
    my_putstr(" for storage locations.\n");
    return 0;
}
