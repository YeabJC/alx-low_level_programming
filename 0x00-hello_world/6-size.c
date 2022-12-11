#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{

int a;
long int b;
long long int c;
char d;
float f;

printf("The size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("The size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("The size of a long int: %lu bytes(s)\n", (unsigned long int)sizeof(b));
printf("The size of a long long char: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("The size of a float: %lu bytes(s)\n", (unsigned long int)sizeof(f));
return (0);
}
