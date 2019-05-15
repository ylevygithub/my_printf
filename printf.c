/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** my_printf.c
*/

#include "my_printf.h"

int my_printf(const char *format, ...)
{
    va_list list;
    int i = 0;
    int lock = 0;

    while (format[i] != '\0') {
        if (format[i] != '%') {
            my_putchar(format[i]);
            i = i + 1;
        }
        else {
            if (lock == 0) {
                va_start(list, format);
                lock = 1;
            }
            i++;
            flags(format, list, i);
            i++;
        }
    }
    va_end(list);
    return (0);
}

void flags(const char *format, va_list list, int i)
{
    if (format[i] == 'd' || format[i] == 'i')
        my_put_nbr(va_arg(list, int));
    if (format[i] == 'c')
        my_putchar(va_arg(list, int));
    if (format[i] == 'b')
        my_putnbr_base(va_arg(list, unsigned int), 2);
    if (format[i] == 's')
        my_putstr(va_arg(list, char *));
    if (format[i] == '%')
        my_putchar('%');
    if (format[i] == 'l') {
        i++;
        if (format[i] == 'd')
            my_put_nbr_long(va_arg(list, long));
    }
    if (format[i] == 'o')
        my_putnbr_base(va_arg(list, unsigned int), 8);
    if (format[i] == 'u')
        my_putnbr_base(va_arg(list, unsigned int), 10);
}
