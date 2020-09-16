
#ifndef DYN_ARRAY_H
#define DYN_ARRAY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct DynArrayStruct
{
  int* data;
  size_t capacity;
  size_t size;
} DynArray;

int initDynArray(DynArray*, size_t);
int insertDynArray(DynArray*, int);
void freeDynArray(DynArray*);
void printDynArray(DynArray*);

#endif
