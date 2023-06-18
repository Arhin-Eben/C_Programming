#include <stdio.h>
/**
 * main - Entry to the program,this is where execution starts
 * Description - program that prints all possible combinations of single-digit
 * Return: Always 0 (success).
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
