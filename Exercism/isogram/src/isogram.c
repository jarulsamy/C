#include "isogram.h"
#include <string.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{

    if (phrase == NULL)
        return false;

    int hash_map[26] = {0};
    int len = strlen(phrase);
    char c;

    for (int i = 0; i < len; i++)
    {
        c = tolower(phrase[i]);
        if (c > 'a' && c < 'z')
        {
            hash_map[c - 'a']++;

            if (hash_map[c - 'a'] > 1)
                return false;
        }
    }

    return true;
}
