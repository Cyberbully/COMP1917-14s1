/* given a string, find it's length
 * DO NOT USE strlen
 * mark submissions using "./mark q2"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 128

int strlength(char *str);

/* do not edit this */
int main(void) {
    char string[MAX_SIZE] = { 0 };
    fgets(string, MAX_SIZE - 1, stdin);
    // kill new line - don't worry too much about this
    string[strlen(string) - 1] = 0;
    printf("length: %d\n", strlength(string));
    return EXIT_SUCCESS;
}

int strlength(char *str) {
}
