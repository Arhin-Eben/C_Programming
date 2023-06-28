#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character  should be printed
 *
 * Description: This function prints a diagonal line in the terminal
 * using the  character. The number of times the character is printed
 * is specified by the n parameter. If n is 0 or less, the function
 * only prints a newline character.
 **/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
		_putchar(' ');

	_putchar('\');
	_putchar('\n');
	}
}
