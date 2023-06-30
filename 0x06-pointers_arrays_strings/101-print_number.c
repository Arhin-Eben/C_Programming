#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1;
	int is_negative = 0;

	if (n < 0)
	{
	putchar('-');
	is_negative = 1;
	}

	while (n / divisor > 9 || n / divisor < -9)
	divisor *= 10;

	while (divisor != 0)
	{
	int digit = n / divisor;

	if (is_negative)
	putchar('0' - digit);
	else
	putchar('0' + digit);

	n %= divisor;
	divisor /= 10;
	}
}

