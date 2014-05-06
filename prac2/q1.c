/*
    common exam question
    find whether a sequence in an array is increasing
    1 2 2 is increasing
    1 2 3 is increasing
    1 2 1 is not increasing
    please do this in the isIncreasing function

    you can test your submission using:
    ./mark q1
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int isIncreasing(int array[], int n);

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

    printf("%d\n", isIncreasing(array, n));
    return EXIT_SUCCESS;
}

/* modify this function! */
int isIncreasing(int array[], int n) {
    return 0;
}
