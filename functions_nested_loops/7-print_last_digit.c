#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    int ld;

    ld = n % 10;        /* récupère le dernier chiffre */

    if (ld < 0)         /* si négatif, on le rend positif */
        ld = -ld;

    _putchar(ld + '0'); /* conversion entier -> caractère ASCII */

    return (ld);
}
