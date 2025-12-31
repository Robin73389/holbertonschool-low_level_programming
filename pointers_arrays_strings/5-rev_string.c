#include"main.h"
#include<string.h>

/**
 * rev_string - This is the name for the function
 * @s: This is the string
 */
void rev_string(char *s)
{

	char *start = s;
	char *end = s;
	char a;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end > start)
	{
		a = *start;
		*start = *end;
		*end = a;

		start++;
		end--;
	}
}
