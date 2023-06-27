#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, separated by comma and space
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n = 50;
	long int fib1 = 1, fib2 = 2, next;

	printf("%ld, %ld", fib1, fib2);

	for (i = 2; i < n; i++)
	{
	next = fib1 + fib2;
	printf(", %ld", next);
	fib1 = fib2;
	fib2 = next;
	}

	printf("\n");

	return (0);
}
