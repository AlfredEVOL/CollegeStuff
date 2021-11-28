#include <stdbool.h>
#include <stdio.h>
#define STACK_SIZE 10

int Stack[STACK_SIZE];
int top = -1;

bool push(int e) {
    if (top == STACK_SIZE)
        return false;
    Stack[++top] = e;
    return true;
}

bool pop() {
    if (top == -1)
        return false;
    top--;
    return true;
}

int peek() {
    return Stack[top];
}

bool isEmpty() {
    return top==-1;
}
bool isFull() {
    return top==STACK_SIZE;
}

int main() {
    int c;
    do {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Is the stack empty?\n5. Is the stack full\n0. Exit\nEnter selection : ");
        scanf(" %d", &c);
        switch (c) {
        case 1: {
            int e;
            printf("Enter number : ");
            scanf(" %d",&e);
            if(push(e))
                printf("Pushed into the stack successfully.\n");
            else
                printf("Stack Overflow!\n");
        }
        break;
        case 2: {
            if(isEmpty()) {
                printf("Stack Underflow!\n");
                break;
            }
            printf("Confirm to pop %d (y/n).\n",peek());
            char c;
            scanf(" %c",&c);
            if(c=='y'||c=='Y')
                pop();
        }
        break;
        case 3: {
            if(isEmpty())
                printf("Stack Underflow!");
            else
                printf("%d\n",peek());
        }
        break;
        case 4: {
            if(isEmpty())
                printf("The stack is empty.");
            else
                printf("The stack is not empty.");
        }
        break;
        case 5: {
            if(isFull())
                printf("The stack is full.");
            else
                printf("The stack is not full.");
        }
        break;
        }
    } while (c);
    return 0;
}
