#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alfa = 'z';

	for (alfa = 'z'; alfa >= 'a'; alfa--)
	{
		putchar (alfa);
	}
	putchar ('\n');
	return (0);
}
