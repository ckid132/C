#ifndef QUEUE_H
#define QUEUE_H
#define ARRAYSIZE 100

typedef struct queue{
	int array[ARRAYSIZE];
	int front;
	int rear;
} Queue; //구조체 정의는 헤더파일에서 ㄱㄱ

void push(Queue *pq, int value);
int pop(Queue *pq);
int initQueue(Queue *pq);
#endif

//함수 인자로 값? 포인터? 

// 포인터 = 컨스트 붙? 안붙?

//포인터가 가르키는 대상 바꿈? 안바꿈? 바꾸면 컨스트 ㄴㄴ
