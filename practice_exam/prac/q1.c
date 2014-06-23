/**
 * Complete the function findIndex
 * which, given an array, the number of elements in the array  and a number to find,
 * returns the index of that number in the array (the first one available is fine)
 * assume a 0-index array
 * return -1 if not found;
 *
 * run ./mark q1 to mark
 * (5 marks)
 */

#include <stdio.h>
#include <stdlib.h>

/* change this as you please */
int findIndex(int a[], int numE, int find) {
}

/* do not change this */
int main(void) {
    int n, f;
    scanf("%d %d", &n, &f);
    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &(a[i]));
    }
    printf("%d\n", findIndex(a, n, f));
    return 0;
}
