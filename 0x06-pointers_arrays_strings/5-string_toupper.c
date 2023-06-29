#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Convert all lowercase letters of a string to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the modified string.
 */

void string_toupper(char *str)
{
	if (str == NULL)
	{
	return;
	}

	for (int i = 0; str[i] != '0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	}
	}
}
