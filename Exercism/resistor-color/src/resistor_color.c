#include "resistor_color.h"

resistor_band_t color_code(resistor_band_t code)
{
    return code;
}

resistor_band_t *colors()
{
    static resistor_band_t color_array[10];
    for (int i = 0; i < 10; i++)
    {
        color_array[i] = i;
    }

    return color_array;
}
