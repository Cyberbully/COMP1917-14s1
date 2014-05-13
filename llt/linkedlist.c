#include <stdio.h>
#include <stdlib.h>

typedef struct _node *Node;

typedef struct _node {
    int data;
    Node next;
} node;

Node createNode(int data) {
    Node n = malloc(sizeof(struct _node));
    n->data = data;
    n->next = NULL;
    return n;
}

/*void printListR(Node first) {
    if (first != NULL) {
        printListR(first->next);
        printf(" %d");
    }
}*/

void printList(Node first) {
    Node curr = first;
    while (curr != NULL) {
        printf("%d->", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

void freeList(Node first) {
    Node curr = first;
    while (curr != NULL) {
        Node temp = curr->next;
        free(curr);
        curr = temp;
    }
}

Node generateNodes(int n) {
    Node first = NULL;
    if (n >= 0) {
        first = createNode(0);
        Node curr = first;
        int i = 1;
        while (i <= n) {
            curr->next = createNode(i);
            curr = curr->next;
            i++;
        }
    }
    return first;
}

Node insertNodeAtPosition(Node first, Node insert, int k) {
    if (k == 0) {
        insert->next = first;
        first = insert;   
    } else {
        int i = 0;
        Node curr = first;
        while (i < k - 1) {
            i++;
            curr = curr->next;
        }
        insert->next = curr->next;
        curr->next = insert;
    }
    return first;
}

/* delete node at position k */
Node deleteAtPosition(Node first, int k) ;
/* put the back element at the front */
Node backToFront(Node first);
/* put the front element at the back */
Node frontToBack(Node first);
/* reverse the linked list */
Node reverse(Node first);
/* given two lists of equal size, zip em
   [1]->[2]->[X]
   [4]->[5]->[X]
   becomes [1]->[4]->[2]->[5]->[X}
*/
Node zipLists(Node first, Node second);

int main(void) {    
    Node first = generateNodes(5);
    first = insertNodeAtPosition(first, createNode(100), 0);
    printList(first);
    freeList(first);
    //printf("%d\n", first->next->next->next->data);
    return 0;
}


