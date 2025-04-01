#include <stdio.h>
#include <stdlib.h>

//stack using array
#define MAX_SIZE 100

typedef struct{
int arr[MAX_SIZE];
int top;
}Stack;

void initStack (Stack * s){
s-> top= -1;
}

int isStackEmpty (Stack * s){
return s->top == -1;
}

int isStackFull(Stack * s){
return s->top == MAX_SIZE - 1;
}

void push(Stack * s, int value){
if (isStackFull(s)){
    printf("Stack Overflow!\n");
    return;
}
s->arr[++s->top] = value;
}

int pop(Stack * s){
if(isStackEmpty(s)){
    printf("Stack Underflow!\n");
    return -1;
}
return s-> arr[s->top--];
}
int peekStack(Stack * s){
if(isStackEmpty(s)){
    printf("Stack is Empty!\n");
    return -1;
}
return s->arr[s->top];
}
int main() {
    Stack myStack;
    initStack(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    printf("Top of the stack: %d\n", peekStack(&myStack));

    printf("Popped element: %d\n", pop(&myStack));
    printf("Popped element: %d\n", pop(&myStack));
    printf("Is stack empty: %d\n", isStackEmpty(&myStack));

    return 0;
}

