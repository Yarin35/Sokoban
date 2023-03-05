/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** strlen function
*/
#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        count ++;
        i ++;
    }
    return count;
}
