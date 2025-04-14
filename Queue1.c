typedef struct{
int arr[MAX_SIZE];
int front;
int rear;
int size;
}Queue;

void initQueue(Queue*q){
q->front = 0;
q->rear = -1;
q->size = 0;
}

int isQueueEmpty(Queue*q){
return q->size == 0;
}

int isQueueFull(Queue*q){
return q->size == MAX_SIZE;
}

void enqueue(Queue*q, int value){
if(isQueueFull(q)){
    printf("Queue Overflow!\n");
    return;
}
q->rear = (q->rear + 1) % MAX_SIZE;  //Circular increment
q->arr[q->rear] = value;
q->size++;

}

int dequeue(Queue*q){
if(isQueueEmpty(q)){
    printf("Queue Underflow!\n");
    return -1;
}
int value = q->arr[q->front];
q->front = (q->front + 1) % MAX_SIZE; //Circular increment
q->size--;
return value;
}

int peekQueue(Queue*q){
if(isQueueEmpty(q)){
    printf("Queue is Empty!\n");
    return -1;
}
return q->arr[q->front];
}

int main{

}


