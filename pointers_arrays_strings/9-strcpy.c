#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while( src[i] != '\0')
	{	
		src[i] = dest[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}
