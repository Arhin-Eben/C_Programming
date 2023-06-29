#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *@str: character pointer
 * integer to check
 * It executes the code within its block and returns an integer value.
 * Return: returns the string pointer variable
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
