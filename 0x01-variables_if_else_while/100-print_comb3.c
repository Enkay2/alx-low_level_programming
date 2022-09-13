
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = j + 1; i <= 9; i++)
		{
			putchar(j + '0');
			putchar(i + '0');
		if (j < 8)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
}
