//#include <stdio.h>
#include "queue.h"
#include <assert.h>
#include <stdlib.h>

void initQueue(Queue *pq, int size)
{
	pq->pArr = malloc(sizeof(int) * size);
	assert(pq->pArr/*!=NULL*/);
	
	pq->size = size;
	
	pq->front = 0;
	pq->rear = 0;
}

void cleanupQueue(Queue *pq)
{
	free(pq->pArr);
}

void push(Queue *pq, int data)
{

/*	if(pq->rear == pq->size){
		fprintf(stderr, "queue is full\n");
		exit(1);
	
	}
	*/
	assert(pq->rear != pq->size);
	
	pq->pArr[pq->rear] = data;
	++pq->rear;
}
int pop(Queue *pq)
{
	/*if(pq->front == pq->rear){
	fprintf(stderr, "queue is empty\n");
	exit(2);

	}
*/
	assert(pq->front != pq->rear);
	
	int result = pq->pArr[pq->front];
	++pq->front;
	
	return result;
	
	//int result = queue[front];
	//++front;
	//return result;
}

