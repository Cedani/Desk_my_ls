/*
** EPITECH PROJECT, 2020
** lk_l_desk
** File description:
** my_ls
*/

#ifndef MY_LS_H_
#define MY_LS_H_
#define maj(devnum)           (((unsigned int)devnum & 0xFF00U) >> 8)
#define min(devnum)           ((unsigned int)devnum & 0xFFFF00FFU)
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stddef.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <string.h>

#endif /* !MY_LS_H_ */
