#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

 /* Compute the length of the string */
	while (s[len])
	len++;

 /* Print the string in reverse */
	while (len--)
	putchar(s[len]);

 /* Print a new line */
	putchar('\n');
}
