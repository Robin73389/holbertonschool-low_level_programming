#include <stdio.h>
int main(){
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++){
            putchar(ch);
    }
            

    for (ch = 'A'; ch <= 'Z'; ch++){
	    putchar(ch);
	}
    	putchar('\n');
    return (0);
}
