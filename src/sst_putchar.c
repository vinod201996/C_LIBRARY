/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void sst_putchar(char c) {
  extern long write(int, const char *, unsigned long);
  (void) write(1, &c, 1);
}
