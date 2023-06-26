#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Description: This function prints a straight line in the terminal
 * using the _ character. The number of times the character is printed
 * is specified by the n parameter. If n is 0 or less, the function
 * only prints a newline character.
 **/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < n; i++)
	_putchar('_');

	_putchar('\n');
}

