#include <stdio.h>

/**
 * main - print all letters except q and e
 * Return: Always 0 (Successs)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
