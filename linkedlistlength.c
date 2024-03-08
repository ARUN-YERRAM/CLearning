#include <stdio.h>
#include <stdlib.h>                                                                                                                                                                                                                             
struct Node {
    int data;
    struct Node *next;
};
int getLength(struct Node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}
int main() {
    struct Node *head = NULL;
    /* code to create a linked list */
    int length = getLength(head);
    printf("The length of the linked list is: %d\n", length);
    return 0;
}
