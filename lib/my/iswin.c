/*
** EPITECH PROJECT, 2023
** iswin.c
** File description:
** check for win condition
*/

#include "../../include/my.h"

int iswin(my_map_t *st)
{
    if (st->counter == st->index)
        return 0;
    else
        st->index = 0;
    return 1;
}
