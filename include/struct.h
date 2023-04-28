/*
** EPITECH PROJECT, 2022
** struct
** File description:
** struct
*/

#ifndef _STRUCT_H
    #define _STRUCT_H

typedef struct hangman_s {
    char **arr;
    char *secret_word;
    char *hidden_word;
    int size_word;
} hangman_t;

#endif
