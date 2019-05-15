/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** my_putstr
*/

#include "my_printf.h"

int my_putstr(const char *str)
{
    int nb;
    
    nb = 0;
    while (str[nb] != '\0') {
        my_putchar(str[nb]);
        nb = nb + 1;
    }
    return (0);
}
