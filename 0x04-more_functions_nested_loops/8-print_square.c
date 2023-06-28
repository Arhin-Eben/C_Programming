#include "main.h"

/**
 * print_square - prints a square of a given size
 * @size: size of the square
 *
 * Description: This function prints a square using the '#' character.
 * The size of the square is specified by the size parameter. If size is
 * 0 or less, the function only prints a new line.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
