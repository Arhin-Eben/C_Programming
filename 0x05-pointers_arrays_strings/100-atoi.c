I#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int i, sign;
	long int num;

	num = 0;
	sign = 1;
	i = 0;
	/* Skip all non-digit characters */
	while (s[i] != '0' && (s[i] < '0' || s[i] > '9'))
	{
	if (s[i] == '-')
	sign *= -1;
	i++;
	}

	/* Convert the number */
	while (s[i] != '0' && (s[i] >= '0' && s[i] <= '9'))
	{
	num = (num * 10) + (s[i] - '0');
	i++
	}

	return (sign * num);
}

