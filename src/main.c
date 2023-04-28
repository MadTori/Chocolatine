/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../include/my.h"

static int nb_line(const char *file_name)
{
    int count = 0;
    char *line = NULL;
    size_t size = 0;
    FILE *file = fopen(file_name, "r");

    while (getline(&line, &size, file) != -1) {
        count++;
    }
    return (count);
}

static void take_file_word(char const *file_name, hangman_t *hangman)
{
    hangman->arr = malloc(sizeof(char *[nb_line(file_name) + 1]));
    int i = 0;
    char *line = NULL;
    size_t size = 0;
    FILE *file = fopen(file_name, "r");

    for (i = 0; getline(&line, &size, file) != -1; i += 1) {
	hangman->arr[i] = strdup(line);
        hangman->arr[i][strlen(line) - 1] = '\0';
        line = NULL;
        size = 0;
    }
    hangman->arr[i] = NULL;
    free(line);
    fclose(file);
}

static void pick_random_word(const char *file_name, hangman_t *hangman)
{
    hangman->secret_word = strdup(hangman->arr[rand() % nb_line(file_name)]);
    hangman->hidden_word = strdup(hangman->secret_word);
    hangman->size_word = strlen(hangman->secret_word);
    
    for (int i = 0; i < hangman->size_word; i += 1) {
	hangman->hidden_word[i] = '*';
    }
}

int main(int ac, char **av)
{
    hangman_t *hangman = malloc(sizeof(hangman_t));
    
    srand(time(NULL));
    if (check_error(ac, av) == 84) {
        return (84);
    }
    take_file_word(av[1], hangman);
    pick_random_word(av[1], hangman);
    display(hangman, av);
    return (0);
}
