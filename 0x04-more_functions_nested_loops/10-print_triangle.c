#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Prints a triangle using the '#' character
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	putchar('\n');
	return;
	}

	for (i = 0; i < size; i++)
	{
	for (j = 0; j <= i; j++)
	{
	putchar('#');
	}
	putchar('\n');
	}
}

