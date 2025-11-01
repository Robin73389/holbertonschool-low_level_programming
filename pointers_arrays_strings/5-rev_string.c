#include"main.h"
#include<string.h>
void rev_string(char *s)
{	
	char tmp;
	int end = 0;
	int start = 0;
	while(s[end] != '\0')	
		end++;
	end--;
	while ( start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}


}		
