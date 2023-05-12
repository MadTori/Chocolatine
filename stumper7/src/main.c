/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/my.h"
#include "../lib/my/include/lib.h"

static int nb_swap(int nb1, int nb2)
{

}

static char *str_swap(char *s1, char *s2)
{

}

static int not_in_arr(char *str, int i, char **arr)
{
    for (int j = 0; arr[j] != NULL; j++) {
        if (arr[j][0] == str[i]) {
            return (1);
        }
    }
    return (0);
}

static char **get_each_char(char *str)
{
    int count = 0;
    char **arr = malloc(sizeof(char*[strlen(str)]));

    for (int i = 0; str[i] != '\0'; i += 1) {
        if (not_in_arr(str, i, arr) == 0) {
            arr[count] = malloc(sizeof(char[2]));
            arr[count][0] = str[i];
            arr[count][1] = '\0';
            count++;
            arr[count] = NULL;
        }
    }
    return (arr);
}

char **create_special_array(char *str)
{

}

void display_letters(int ac, char **av)
{
    int r_opt = 0, t_opt = 0, check = 0, nbr = 0;
    char *str, *search_str = NULL;

    for (int i = 1; av[i] != NULL; i += 1) {
        if (strcmp(av[i], "-r") == 0) {
            r_opt = 1;
        }
        if (strcmp(av[i], "-t") == 0) {
            t_opt = 1;
        }
        if (strcmp(av[i], "-r") != 0 && strcmp(av[i], "-t") != 0) {
            str = av[i];
            if (av[i + 1] != NULL) {
                check = 1;
                search_str = av[i + 1];
            }
            break;
        }
    }

    char **arr = NULL;
    int *count = malloc(sizeof(char[strlen(str)]));

    if (check == 0) {
        arr = get_each_char(str);
    }


    for (int i = 0; arr[i] != NULL; i++) {
        count[i] = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if (arr[i][0] == str[j]) {
                count[i] += 1;
            }
        }
        printf("%s:%d\n", arr[i], count[i]);
    }

}

int main(int ac, char **av)
{
    if (check_error(ac, av) == 84) {
        return (84);
    }
    display_letters(ac, av);
    return (0);
}
