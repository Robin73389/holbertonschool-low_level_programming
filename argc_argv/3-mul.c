#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	result = i * j;

	printf("%d\n", result);

	return (0);
}
