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

int main(void) {
    Node first = createNode(5);
/*  Node second = createNode(7);*/
    first->next = createNode(7);
    first->next->next = createNode(8);
    printList(first->next);
    //printf("%d\n", first->next->next->next->data);
    return 0;
}


