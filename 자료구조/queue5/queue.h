#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue
{
   void *pArr; // save adderess
   int eleSize;
   int size;
   int front;
   int rear;
} Queue;

void initQueue(Queue *pq, int size, int eleSize);
void cleanupQueue(Queue *pq);

void push(Queue *pq, const void *pData);
void pop(Queue *pq, void *pResult);

#endif
