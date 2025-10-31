#include"main.h"
#include<string.h>
#include<stdio.h>
int _strlen(char *s)
{
	int count;

	for ( count = 0; *s != '\0'; s++)
		count ++;	

	return count;
}
