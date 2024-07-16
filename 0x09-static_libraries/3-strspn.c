#include "main.h"

/**
 * _strspn -function that measures the initial segment
 * of s which consists entirely of characters in t
 * @s: string to examine
 * @t: string to compare against
 * Return: length of initial segment of s
 * which consists entirely of characters in t
 */

size_t _strspn(const char *s, const char *t)
{
    size_t i, l;

    for (i = 0; s[i]; i++)
    {
        for (l = 0; t[l]; l++)
        {
            if (s[i] == t[l])
                break;
        }

        if (t[l])
            break;
    }

    return i;
}
