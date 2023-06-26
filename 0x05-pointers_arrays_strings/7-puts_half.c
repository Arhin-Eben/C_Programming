#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, n;

    /* get the length of the string */
	while (str[len] != '\0')
	len++;

    /* calculate the number of characters to print */
	n = (len + 1) / 2;

    /* print the second half of the string */
	for (i = n; i < len; i++)
	putchar(str[i]);

    /* print a new line */
	putchar('\n');
}
