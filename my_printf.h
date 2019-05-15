/*
** EPITECH PROJECT, 2017
** my-printf.h
** File description:
** 
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int my_printf(const char *format, ...);
int my_putstr(const char *str);
void my_putchar(char );
int my_put_nbr(int );
char *my_revstr(char *);
int my_put_nbr_long(long );
void my_putnbr_base(int , int );

void flags(const char *format, va_list list, int i);
