/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"


void sst_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        sst_putchar('-');
        sst_putchar('2');
        sst_putnbr(147483648);
    }
    else if (nb < 0)
    {
        sst_putchar('-');
        sst_putnbr(-nb);
    }
    else if (nb > 9)
    {
        sst_putnbr(nb / 10);
        sst_putnbr(nb % 10);
    }
    else
        sst_putchar(nb + '0');
}
