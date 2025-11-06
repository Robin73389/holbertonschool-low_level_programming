#ifndef MAIN_H
#define MAIN_H
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void print_array(int *a, int n);
char *string_toupper(char *);
char *_strchr(char *s, char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
#endif
