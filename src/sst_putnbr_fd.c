/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void sst_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
    {
        sst_putchar_fd('-',fd);
        sst_putchar_fd('2',fd);
        sst_putnbr_fd(147483648,fd);
    }
    else if (nb < 0)
    {
        sst_putchar_fd('-',fd);
        sst_putnbr_fd(-nb,fd);
    }
    else if (nb > 9)
    {
        sst_putnbr_fd(nb / 10,fd);
        sst_putnbr_fd(nb % 10,fd);
    }
    else
        sst_putchar_fd(nb + '0',fd);
}
