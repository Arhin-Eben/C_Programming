#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	int a[] = {97, 98, 99};
	int *p = a + 2;

	printf("a[2] = %dn", *(p - 1) + 1);

	return (0);
}
