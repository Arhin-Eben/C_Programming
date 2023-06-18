#include <stdio.h>
/**
 * main - Entry to the program,this is where execution starts
 * Description - program that prints all single digit numbers of base 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
