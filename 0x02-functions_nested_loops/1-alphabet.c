#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a newline
 *
 * This function prints the lowercase alphabet followed by a newline character
 * using the _putchar function. The alphabet is printed in order from 'a' to 'z',
 * with each character printed on a new line.
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
