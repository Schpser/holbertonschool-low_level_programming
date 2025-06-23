#include "main.h"
#include <stdio.h>

int main(void)
{
char test1 = 'A';
char test2 = 'a';
char test3 = '5';
printf("%c est une majuscule ? %d\n", test1, isupper(test1));
printf("%c est une majuscule ? %d\n", test2, isupper(test2));
printf("%c est une majuscule ? %d\n", test3, isupper(test3));
return (0);
}
