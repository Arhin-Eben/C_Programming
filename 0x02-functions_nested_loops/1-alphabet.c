#include "main.h"

/**
 * main - Entry point
 * second task in C
 * Return: Always 0 indicating success
 */

void print_alphabet(void);
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

	return (0);
}
