/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** library reminder
*/

#ifndef MY_H
    #define MY_H
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <ncurses.h>
    #include <stddef.h>
    #include <stdio.h>
    #include "struct.h"

void *my_calloc(size_t type, size_t size);
int free_game(char **map, my_map_t *st);
int islost(char **map, my_map_t *st);
int iswin(my_map_t *st);
int game_checker(char **map, my_map_t *st);
void reset_map(char **map, my_map_t *st);
int my_interactions(int tile, char **map, my_map_t *st);
void my_struct_initialiser(char **map, my_map_t *st);
int my_game(char **map, my_map_t *st);
char **my_map_creator(char *filepath, my_map_t *st);
int my_putstr(char const *str);
int my_strlen(char const *str);
bool my_strcmp(char const *s1, char const *s2);
int my_info(void);
int my_error(int argc, char **argv);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_strlen(char const *str);
char **my_str_to_word_array(char *str, char n, size_t i, size_t j);
#endif /* MY_H */
