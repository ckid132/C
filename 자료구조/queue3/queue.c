#include <stdio.h>
#include "queue.h"
#include <stdlib.h>

int initQueue(Queue *pq)
{
	pq->front = 0;
	pq->rear = 0;
}

void push(Queue *pq, int data)
{

	if(pq->rear == ARRAYSIZE){
		fprintf(stderr, "queue is full\n");
		exit(1);
	
	}
	//queue[rear] = data;
	//++rear;
	pq->array[pq->rear] = data;
	++pq->rear;
}
int pop(Queue *pq)
{
	if(pq->front == pq->rear){
	fprintf(stderr, "queue is empty\n");
	exit(2);

	}

	int result = pq->array[pq->front];
	++pq->front;
	
	return result;
	
	//int result = queue[front];
	//++front;
	//return result;
}

