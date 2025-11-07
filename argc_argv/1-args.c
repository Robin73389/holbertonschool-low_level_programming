#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argv;   /* on dit au compilateur "je n'utilise pas argv" */
    printf("%d\n", argc - 1);
    return (0);
}
