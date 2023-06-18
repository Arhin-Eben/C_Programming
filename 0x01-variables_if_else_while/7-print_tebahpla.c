#include <stdio.h>
/**
 * main - Entry to the program,this is where execution starts
 * Description - program that prints the lowercase alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
