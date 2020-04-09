#include "resistor_color_duo.h"

int color_code(resistor_band_t c[])
{
    unsigned pow = 10;

    while (c[1] >= pow)
        pow *= 10;

    return c[0] * pow + c[1];
}
