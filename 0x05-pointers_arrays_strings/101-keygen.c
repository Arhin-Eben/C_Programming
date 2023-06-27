#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char password[7]; // 6 character password + null terminator
    int i, random;

    srand(time(NULL)); // seed the random number generator with the current time

    for (i = 0; i < 6; i++) {
        random = rand() % 62; // generate a random number between 0 and 61
        if (random < 26) {
            password[i] = 'A' + random; // if random is less than 26, add a random uppercase letter
        } else if (random < 52) {
            password[i] = 'a' + random - 26; // if random is between 26 and 51, add a random lowercase letter
        } else {
            password[i] = '0' + random - 52; // if random is between 52 and 61, add a random digit
        }
    }

    password[6] = '0'; // add null terminator to the end of the password string

    printf("%sn", password); // print the generated password

    return 0;
}

