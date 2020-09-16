
#include "dynArray.h"

int initDynArray(DynArray* a, size_t initCapacity)
{
  a->data = (int*)malloc(initCapacity * sizeof(int));
  // Failed to allocate
  if (!a->data)
  {
    return -1;
  }

  a->size = 0;
  a->capacity = initCapacity;

  // Successfully allocated
  return 0;
}

int insertDynArray(DynArray* a, int element)
{
  if (a->size == a->capacity)
  {
    // Try to reallocate double the memory to avoid having to reallocate
    // many times.
    int* tmp = (int*)realloc(a->data, (a->capacity * 2) * sizeof(int));
    if (tmp)
    {
      a->capacity *= 2;
      a->data = tmp;
    }
    else
    {
      // Failed to allocate more memory
      return -1;
    }
  }

  a->data[a->size++] = element;
  return 0;
}

void freeDynArray(DynArray* a)
{
  free(a->data);
  a->data = NULL;
  a->size = 0;
  a->capacity = 0;
}

void printDynArray(DynArray* a)
{
  for (size_t i = 0; i < a->size; ++i)
  {
    printf("%d\n", a->data[i]);
  }
}
