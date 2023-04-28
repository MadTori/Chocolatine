/*
** EPITECH PROJECT, 2023
** display
** File description:
** display
*/

#include <stdio.h>
#include <stdlib.h>

#include "../include/my.h"

void display(hangman_t *hangman, char **av)
{
    int tries = 10;

    if (av[2] != NULL) {
        tries = atoi(av[2]);
    }
    printf("%s\n", hangman->hidden_word);
    printf("Tries: %d\n", tries);
}
