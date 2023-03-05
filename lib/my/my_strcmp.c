/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** reproduce the behvior of the strcmp function
*/
#include "../../include/my.h"

bool my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] != '\0'; i ++)
        if (s1[i] != s2[i])
            return false;
    return true;
}
