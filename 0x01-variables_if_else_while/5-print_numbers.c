#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *  main - Entry point
 *  Result: Always 0 (Success)
 */
int main(void)
{
	char a = 48;
	char z = 57;

	while (a <= z)
	{
		printf("%c\n", a);
		a++;
	}
	return (0);
}
