/*
 * Richard Buckland Theory Exam Question!
 * The three bears have all got a certain bowl of porridge.
 * However, these bowls aren't given to the right bears!
 * Little bear might have the biggest bowl, when he wants the smallest.
 * Mother bear might have the smallest bowl, when she wants the one in between.
 * Papa bear might have the middle-biggest bowl, but he wants the largest.
 * Given the numberic value as an integer that quantifies how much is in each bowl,
 * assign each bear to have the correct bowl! (note they may be in any order)
 *
 * mark using "./mark q1"
 * compile using "./mark q1" and then "./q1"
 */

#include <stdio.h>
#include <stdlib.h>

void sortTheBowls(int *little, int *mother, int *papa);

/* do not modify this */
int main(void) {
    int little, mother, papa;
    scanf("%d%d%d", &little, &mother, &papa);
    sortTheBowls(&little, &mother, &papa);
    printf("%d %d %d\n", little, mother, papa);
    return EXIT_SUCCESS;
}

/* make sure each bear gets the right bowls! */
void sortTheBowls(int *little, int *mother, int *papa) {
}
