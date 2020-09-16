#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "dynArray.h"

int main()
{
  srand(time(0));
  size_t len = (rand() % 100);

  DynArray my_array;
  initDynArray(&my_array, len);

  for (int i = 0; i < len; i++)
  {
    insertDynArray(&my_array, i);
  }
  printf("Size of dynamic array: %zu\n", len);

  printDynArray(&my_array);
  // Remember to cleanup memory
  freeDynArray(&my_array);

  return 0;
}

