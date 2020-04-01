#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "bool.h"

int main()
{
    if (true)
    {
        printf("True!\n");
    }
    else
    {
        printf("Else!\n");
    }
    if (!false)
    {
        printf("Not false!\n");
    }

    return 0;
}
