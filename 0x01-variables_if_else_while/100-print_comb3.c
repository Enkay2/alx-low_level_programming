
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int singles;
	int doubles;

	for (doubles = 0; doubles <= 9; doubles++)
	{
		for (singles = doubles + 1; singles <= 9; singles++)
		{
			putchar(doubles + '0');
			putchar(singles + '0');
		if (doubles < 8)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
}
