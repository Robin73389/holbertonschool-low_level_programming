#include <stdio.h>
/**
  *main - prints numbers of base 16 in lowercase
  *Return: 0
*/
int main(void)
{
    int numbers;
    int ch;
    for (numbers = '0'; numbers <= '9'; numbers++)
    {
	putchar(numbers);
    }
    {
    for (ch = 'a' ; ch <='f'; ch++)
	    putchar(ch);
    }

    putchar('\n');
    return (0);
}
