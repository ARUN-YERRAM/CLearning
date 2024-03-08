#include <stdio.h>
#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = 0;
int rear = -1;
int count = 0;
void enqueue(int element) {
    if (count >= MAX_SIZE) {
        printf("Queue is full.\n");
        return;
    }
    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = element;
    count++;
}
void dequeue() {
    if (count <= 0) {
        printf("Queue is empty.\n");
        return;
    }
    front = (front + 1) % MAX_SIZE;
    count--;
}
int front_element() {
    if (count <= 0) {
        printf("Queue is empty.\n");
        return -1;
    }
    return queue[front];
}
int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printf("Front element: %d\n", front_element());
    dequeue();
    printf("Front element: %d\n", front_element());
    dequeue();
    printf("Front element: %d\n", front_element());
    dequeue();
    printf("Front element: %d\n", front_element());
    return 0;
}
