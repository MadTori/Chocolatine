/*
** EPITECH PROJECT, 2022
** putstr
** File description:
** putstr
*/

#include <unistd.h>

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        write(1, &str[i], 1);
    }
    return;
}
