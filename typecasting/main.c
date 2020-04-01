#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int x_hex = 0x01;

    printf("This is an int: %d\n", x_hex);
    printf("This is a short: %d\n", (short)x_hex);
    printf("This is a char: %d\n", (char)x_hex);

    return 0;
}
