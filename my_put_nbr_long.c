/*                                                                                      
** EPITECH PROJECT, 2018                                                   
** my_put_nbr_long                                                                      
** File description:                                                    
** my_put_nbr_long
*/

#include "my_printf.h"

int my_put_nbr_long(long nb)
{
    long i;
    
    if (nb < 0) {
        my_putchar('-');
        i = -nb;
        my_put_nbr_long(i);
    }
    else {
        i = nb;
        if (i >= 10)
            my_put_nbr_long(i / 10);
        my_putchar(i % 10 + '0');
    }
    return 0;
}
