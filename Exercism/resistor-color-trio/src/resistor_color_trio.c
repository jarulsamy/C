#include "resistor_color_trio.h"
#include <stdio.h>

int concatenate_int(int a, int b)
{
    int pow = 10;

    while (b >= pow)
        pow *= 10;

    return a * pow + b;
}

resistor_value_t color_code(resistor_band_t c[])
{
    resistor_value_t resistor;
    int value = concatenate_int(c[0], c[1]);

    // Add the number zeros necessary.
    for (int i = 0; i < (int)c[2]; i++)
    {
        value = concatenate_int(value, 0);
    }

    resistor.value = value;
    resistor.unit = c[2];

    printf("Value %d\n", resistor.value);
    printf("Unit %d\n", resistor.unit);

    return resistor;
}
