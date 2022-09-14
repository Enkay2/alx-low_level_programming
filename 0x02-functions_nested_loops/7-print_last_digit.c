#include "main.h"

/**
 * print_last_digit - prints the last digit of a given integer
 * @n: the parameter that represents the value of the integer to be computed
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int lastnum = n % 10;

	if (n < 0)
		lastnum = lastnum * -1;

	_putchar('0' + lastnum);


	return (lastnum);
}

