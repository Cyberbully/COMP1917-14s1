/*
    Complete the minInArray function, which, given an array of N numbers
    prints out the minimum number of that array
    
    if there are no numbers in the array, return the largest number possible

    you can test your submission using:
    ./mark q0a
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int minInArray(int array[], int n);

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

    printf("%d\n", minInArray(array, n));
    return EXIT_SUCCESS;
}

/* modify this function! */
int minInArray(int array[], int n) {
    return 0;
}
