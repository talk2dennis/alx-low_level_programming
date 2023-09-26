#include "main.h"

/**
 ** _strstr - A function that returns the poiter to the substring
 * @haystack: A string to search
 * @needle: a substring
 * Return: a pointer to the string found
 *
 */

char *_strstr(char *haystack, char *needle)
{
    int i, j, k;

   

    for (i = 0; haystack[i] != '\0'; i++)
    {
        j = i, k = 0;
        while (haystack[j] == needle[k])
        {
            j++;
            k++;
        }
        if (needle[k] == '\0')
                return (&haystack[i]); // Return starting index of match
    }
    return (NULL);
}
