#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, disaster;

    for (i = 0; i < 100; ++i)
    {
        for (j = 0; j < 100; ++j)
        {
            if ((i + j) >= 150)
                disaster = 1;
            if (disaster)
                goto error;
        }
    }

error:
    printf("This is a goto");

    return 0;
}
