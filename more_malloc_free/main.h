#ifndef MAIN_H
#define MAIN_H

char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
int _strlen(char *s);
int is_digit_string(char *s);
void _print_string(char *s);
char *multiply(char *num1, char *num2);

#endif
