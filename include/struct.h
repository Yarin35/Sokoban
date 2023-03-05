/*
** EPITECH PROJECT, 2022
** struct.h
** File description:
** structure of map
*/

#ifndef STRUCT_H
    #define STRUCT_H

typedef struct my_map_s {

    int px;
    int py;
    int nbo;
    int nbx;
    int counter;
    int bcounter;
    char **save;
    int index;

} my_map_t;

#endif /* STRUCT_H */
