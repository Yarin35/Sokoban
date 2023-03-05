/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** copy n characters from a string to another
*/
#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (n > i)
    dest[3] = '\n';
    return dest;
}
