#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack[top] = value;
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow");
        return;
    }
    printf("Popped: %d\n", stack[top]);
    top--;
}

// Peek operation
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();

    return 0;
}