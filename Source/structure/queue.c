#include <stdio.h>
#define qsize 100

typedef struct 
{
    char data[qsize];
    int front,rear;
    /* data */
}cirQueue;

cirQueue q;

void initqueue(cirQueue *q){
    q->front = q ->rear =0;
}

int queueFull(cirQueue *q){
    return (q->rear+1)%qsize == q->front;
}

int queueEmpty(cirQueue *q){
    return (q->front == q->rear);
}

char push(cirQueue *q,char c){
    if (queueFull(q))
    {
        /* code */
        return NULL;
    }else{
        q->data[q->rear] =c;
        q->rear = (q->rear+1)%qsize;
       return c;

    }
    
}

char pop(cirQueue *q){
    if (queueEmpty(q)){
        return NULL;
    }else{
        char x= q->data[q->front];
        q->front = (q->front+1)%qsize;
        return x;
    }



}

int main(){
    cirQueue q;
    initqueue(&q);
    queueEmpty(&q);

}


