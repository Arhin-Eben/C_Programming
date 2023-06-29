#include <stdlib.h>

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, const char *src)
{
	char *ptr = dest;

	while (*ptr)
	ptr++;

	while (*src)
	{
	*ptr = *src;
	ptr++;
	src++;
	}

/*	*ptr = '';*/

	return (dest);
}
