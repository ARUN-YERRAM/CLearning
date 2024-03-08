#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    struct node *head = NULL;  // head of the linked list
    struct node *current = NULL;

    // code to add elements to the linked list

    // traversing the linked list
    current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
    return 0;
}
