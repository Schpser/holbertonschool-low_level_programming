#ifndef MAIN_H
#define MAIN_H
int _atoi(char *s);
int _putchar(char c);
int _strcmp(char *s1, char *s2);

char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

void reverse_array(int *a, int n);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
void _puts(char *str);
int _strlen(char *s);
#endif
