#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

typedef enum
{
    BLACK = 0,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

enum
{
    OHMS = 0,
    KILOOHMS = 2
};

typedef struct resistor_value_t
{
    int value;
    int unit;
} resistor_value_t;

int concatenate_int(int, int);
resistor_value_t color_code(resistor_band_t[]);

#endif
