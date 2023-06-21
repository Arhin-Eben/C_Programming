#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * This function prints the lowercase alphabet followed by a newline character
 * using the _putchar function. Print in order from 'a' to 'z',
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
