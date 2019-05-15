#include "my_printf.h"

void my_putnbr_base(int nb, int size)
{
  if (nb >= size)
      my_putnbr_base(nb / size, size);
  my_put_nbr(nb % size);
}
