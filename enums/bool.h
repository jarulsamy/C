#ifndef BOOL_H
#define BOOL_H

// C99 Doesn't have booleans :(
typedef enum
{
    false,
    true
} bool;

/*
This is the same as
typedef enum
{
    false = 0,
    true
} bool;
*/

#endif
