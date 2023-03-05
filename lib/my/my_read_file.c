/*
** EPITECH PROJECT, 2022
** my_read_file.c
** File description:
** file_reader
*/
#include "../../include/my.h"

int my_read_file(int fd, char *buff, int size)
{
    int error = read(fd, buff, size);
    if (error == size) {
        error = 0;
        return error;
    }
    close (fd);
    return error;
}
