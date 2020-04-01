#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char my_chars[4];
    my_chars[0] = 'J';
    my_chars[1] = 'O';
    my_chars[2] = 'S';
    my_chars[3] = 'H';

    for (int i = 0; i < sizeof(my_chars); i++)
    {
        printf("%d: %c\n", i, my_chars[i]);
    }

    printf("Size of array: %d.\n", sizeof(my_chars));

    // Variable size arrays :)

    printf("Enter the array size: ");
    int array_size;
    // Ask the user to input array size
    fscanf(stdin, "%d", &array_size);
    // Declare the VLA
    int var_length_array[array_size];
    printf("Sizeof array = %zu\n", sizeof(var_length_array));

    return 0;
}
