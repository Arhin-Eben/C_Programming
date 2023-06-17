#include <stdio.h>
/**
 * main - Entry to the program,this is where execution starts
 * Description - C program that prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
