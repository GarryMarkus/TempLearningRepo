#include <stdio.h>
#define maxsize 50

int stk[maxsize], top = -1;

int isempty() {
    return top == -1;
}

int isfull() {
    return top == maxsize - 1;
}

void push(int data) {
    if (isfull()) {
        printf("Stack Overflow\n");
    } else {
        stk[++top] = data;
        printf("Pushed %d onto the stack\n", data);
    }
}

void POP() {
    if (isempty()) {
        printf("Stack Empty\n");
    } else {
        printf("Popped %d from the stack\n", stk[top]);
        top--;
    }
}

void PEEK() {
    if (isempty()) {
        printf("Stack Empty\n");
    } else {
        printf("Top element is %d\n", stk[top]);
    }
}

int main() {
    int m, a;
    printf("1 = Check if empty\n2 = Check if full\n3 = Push\n4 = Pop\n5 = Peek\n6 = Exit\n");
    while (1) {
        printf("Enter Your Choice=");
        scanf("%d", &m);

        switch (m) {
            case 1:
                if (isempty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack is not empty\n");
                }
                break;
            case 2:
                if (isfull()) {
                    printf("Stack is full\n");
                } else {
                    printf("Stack is not full\n");
                }
                break;
            case 3:
                printf("Enter the element to push: ");
                scanf("%d", &a);
                push(a);
                break;
            case 4:
                POP();
                break;
            case 5:
                PEEK();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}