#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{

    int x = 0;
    printf("%p\n", (void *)&x);
    // (%p formats an object pointer of type void *)
    // Prints some address in memory.

    // Pointers start with a * in their decleration.
    // Pointer to an int.
    int *pointer, not_a_pointer;

    // '&' operator to get the address of an object.
    pointer = &x;
    // Dereference a pointer with *
    printf("%d", *pointer);

    return 0;
}
