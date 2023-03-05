/*
** EPITECH PROJECT, 2023
** my_map_creator.c
** File description:
** to create the map
*/

#include "../../include/my.h"

char **my_map_creator(char *filepath, my_map_t *st)
{
    int fd = open(filepath, O_RDONLY);
    struct stat *stats = malloc(sizeof(struct stat));
    stat(filepath, stats);
    int size = stats->st_size;
    char *buff = malloc(sizeof(char) * (size + 1));
    read(fd, buff, size);
    buff[size] = '\0';
    char **map = my_str_to_word_array(buff, '\n', 0, 0);
    st->save = my_str_to_word_array(buff, '\n', 0, 0);
    close(fd);
    free(buff);
    free(stats);
    return map;
}
