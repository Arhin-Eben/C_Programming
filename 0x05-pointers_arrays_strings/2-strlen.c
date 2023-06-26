#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char
 *
 * Description: This function takes a pointer to a char as parameter
 * and returns the length of the string it points to by iterating over
 * the characters in the string and counting them until the null character
 * is reached.
 *
 * Return: The length of the string pointed to by s.
 **/

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;


	return (len);
}
