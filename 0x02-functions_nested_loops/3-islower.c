#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: letter is being tested
 * Description: _islower - prints _putchar message
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
