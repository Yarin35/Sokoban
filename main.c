/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/
#include "include/my.h"
#include "include/struct.h"

int my_error(int argc, char **argv)
{
    int fd = open(argv[1], O_RDONLY);
    if (argc == 1) {
        write(1, "Usage: ./my_sokoban [level-file]\n", 34);
        return 84;
    }
    if (argc != 2) {
        write(1, "Invalid argument.\n", 19);
        return 84;
    }
    if (my_strcmp(argv[1], "-h")) {
        my_info();
        exit(0);
    }
    if (fd < 0)
        return 84;
    close(fd);
    return 0;
}

int main(int argc, char **argv)
{
    my_map_t *st = malloc(sizeof(my_map_t));
    int error = my_error(argc, argv);
    char **map = my_map_creator(argv[1], st);

    if (error != 0)
        return 84;
    if (my_game(map, st) == 1) {
        free_game(map, st);
        return 1;
    } else
        free_game(map, st);
    return error;
}
