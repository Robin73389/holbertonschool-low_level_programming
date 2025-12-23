#include <stdio.h>

/**
 * main - This is function main
 * @argc: This the argument
 * @argv: This the arrays of argument
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	argv[0] = NULL;

	printf("%d\n", argc - 1);

	return (0);
}
