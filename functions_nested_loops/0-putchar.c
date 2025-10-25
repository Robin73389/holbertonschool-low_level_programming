#include <stdio.h>

int main() {
    char *str = "_putchar";
    
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
    
    return 0;
}
