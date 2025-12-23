#include <stdio.h>
/**
 * main - the prototype main
 * @argc: serve to stocked the numbers d'argumente
 * @argv: This is arrays of the pointer
 * Return: (0);
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
