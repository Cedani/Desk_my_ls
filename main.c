/*
** EPITECH PROJECT, 2020
** Desk_my_ls
** File description:
** main
*/

#include "include/my_ls.h"

void write_type_file(struct stat stat1)
{

}

void write_permission(struct stat stat1)
{

}

void write_username(struct stat stat1)
{

}

void write_time(struct stat stat1)
{

}

void my_ls_l(char *name, struct stat stat1)
{
    write_type_file(stat1);
    write_permission(stat1);
    write(1, " ", 1);
    my_put_nbr(stat1.st_nlink);
    write(1, " ", 1);
    write_username(stat1);
    write(1, " ", 1);
    my_put_nbr(stat1.st_size);
    write(1, " ", 1);
    write_time(stat1);
    write(1, " ", 1);
    write(1, name, strlen(name));
}

void loop(char *filepath)
{
    // on appellera la fonction my_ls_l dans cette fonction
}

int main(int argc, char **argv)
{
    return (0);
}