#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_PASS_LENGTH 10
#define MAX_PASS_LENGTH 16

char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

int main(void) {
	int i, pass_length;

	char password[MAX_PASS_LENGTH + 1];

	srand(time(NULL));

	pass_length = rand() % (MAX_PASS_LENGTH - MIN_PASS_LENGTH + 1) + MIN_PASS_LENGTH;

	for (i = 0; i < pass_length; i++) {
	password[i] = valid_chars[rand() % (sizeof(valid_chars) - 1)];
	}

	password[pass_length] = '0';

	printf("%sn", password);

	return 0;
}

