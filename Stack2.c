#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
int data;
struct Node * next;
} Node;

typedef struct{
Node*top;
}LinkedListStack;

void initLinkedListStack(LinkedListStack *s){
s->top = NULL;
}

int isLinkedListStackEmpty(LinkedListStack *s){
return s->top == NULL;
}

void linkedListPush(LinkedListStack *s,int value){
Node *newNode =(Node *)malloc(sizeof(Node));
if(newNode == NULL){
    printf("Memory allocation failed!\n");
    exit(1);
}
newNode->data = value;
newNode->next = s->top;
s->top = newNode;
}

int linkedListPop(LinkedListStack *s){
if(isLinkedListStackEmpty(s)){
    printf("Stack Underflow!\n");
    return -1;
}
int value = s->top->data;
Node *temp = s->top;
s->top = s->top->next;
free(temp);
return value;
}

int linkedListPeek(LinkedListStack *s){
if(isLinkedListStackEmpty(s)){
    printf("Stack is Empty\n");
    return -1;
}
return s->top->data;
}

int main() {
    LinkedListStack myLinkedListStack;
    initLinkedListStack(&myLinkedListStack);

    linkedListPush(&myLinkedListStack, 10);
    linkedListPush(&myLinkedListStack, 30);
    printf("Top of the stack: %d\n", linkedListPeek(&myLinkedListStack));

    printf("Popped element: %d\n", linkedListPop(&myLinkedListStack));
    printf("Popped element: %d\n", linkedListPop(&myLinkedListStack));
    printf("Is stack empty: %d\n", isLinkedListStackEmpty(&myLinkedListStack));

    return 0;
}

