#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 *
 * Description: This function takes two pointers to int as parameters
 * and swaps the values of the integers they point to using a temporary
 * variable. The values of a and b are modified in place.
 **/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
