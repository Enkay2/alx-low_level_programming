#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 48;
	char z = 57;

	while (a <= z)
	{
		putchar(a);
		putchar(10);
		a++;
	}
	return (0);
}
