/*
 * given a string, return a NEW string
 * with the strings reversed (hint: malloc)
 *
 * mark with "./mark q2" 
 * compile and run with "./mark q2" and then "./q2"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 128

char *reverse(char *string);

/* do not edit this function */
int main(void) {
    char string[MAX_SIZE] = { 0 };
    fgets(string, MAX_SIZE - 1, stdin);
    // kill new line - don't worry too much about this
    string[strlen(string) - 1] = 0;
    char *a = reverse(string);
    printf("original: %s\n", string);
    printf("reversed: %s\n", a);
    free(a); // more malloc hint
    return EXIT_SUCCESS;
}

/* reversed string */
char *reverse(char *string) {
}
