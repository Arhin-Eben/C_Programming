#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;

	if (str == NULL)
	return (NULL);

	for (; *ptr != '0'; ptr++)
	{
	if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
	*ptr += 13;
	else if ((*ptr >= 'N' && *ptr <= 'Z') || (*ptr >= 'n' && *ptr <= 'z'))
	*ptr -= 13;
	}

	return (str);
}

