#include <stdio.h>
/**
 * main  - A program that prints the size of various computer types
 * Return 0 (Sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(d))
return (0);
}
