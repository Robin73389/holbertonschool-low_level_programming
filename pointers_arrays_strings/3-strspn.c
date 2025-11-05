#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to scan
 * @accept: string containing accepted chars
 *
 * Return: number of bytes in initial segment of s
 *         consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0, j, count = 0;
    int found;

    /* Tant qu'on n'arrive pas à la fin de s */
    while (s[i] != '\0')
    {
        j = 0;
        found = 0;

        /* Vérifie si s[i] est présent dans accept */
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break; /* on a trouvé une correspondance */
            }
            j++;
        }

        /* Si aucun match n’a été trouvé → on s’arrête */
        if (found == 0)
            break;

        count++;
        i++;
    }

    return (count);
}

