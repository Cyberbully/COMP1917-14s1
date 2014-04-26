/*
    Complete the maxInArray function, which, given an array of N numbers
    prints out the maximum of that array

    you can test your submission using:
    ./mark q1
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // hint! INT_MIN

int maxInArray(int array[], int n);

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

    printf("%d\n", maxInArray(array, n));
    return EXIT_SUCCESS;
}

/* modify this function! */
int maxInArray(int array[], int n) {
    // love meeee
    return 0;
}