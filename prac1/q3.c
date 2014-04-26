/*
    Complete the isPalindromic function
    which, given an array of n integers, determines if
    the sequence is palindromic (same forwards and back)
    make sure you return TRUE or FALSE

    e.g.
    1 2 1
    is palindromic

    1 5 3 1
    is not palindromic

    you can test your submission using:
    ./mark q3
*/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 55
#define FALSE 23

int isPalindromic(int array[], int n);

/* you shouldn't have to modify anything here! */
int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n); // get numbers
    int array[n]; // array of numbers
    int i = 0;
    while (i < n) {
        scanf("%d", &array[i]);
        i++;
    } 

    int r = isPalindromic(array, n);
    printf("%s\n", r == TRUE ? "yes" : (r == FALSE ? "no" : "READ THE #DEFINE"));
    return EXIT_SUCCESS;
}

/* modify this function! */
int isPalindromic(int array[], int n) {
    // love meeee
    return FALSE;
}