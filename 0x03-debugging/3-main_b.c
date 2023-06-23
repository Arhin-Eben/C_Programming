#include <stdio.h>
/**
*main - check code from here
*@year: the set year
*/

int main(void) {
	int year = 2000;

	if (year % 4 == 0) {
	if (year % 100 == 0) {
	if (year % 400 == 0)
	printf("%d is a leap yearn", year);
	else
	printf("%d is not a leap yearn", year);
	}
	else
	printf("%d is a leap yearn", year);
	}
	else
	printf("%d is not a leap yearn", year);

	return 0;
}
