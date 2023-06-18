#include <stdio.h>
/**
 * main - Entry to the program,this is where execution starts
 * Description - program that prints the alphabet in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
