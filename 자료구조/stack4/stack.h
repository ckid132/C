#ifndef STACK_H
#define STACK_H

//typedef unsigned long size_t;
//size_t len;
// unsigned long len;

typedef struct stack {
	//int array[ARRAYSIZE]; 고정길이
	int *pArr //가변길이
	int size;
	int tos;

} Stack;

void initStack(Stack *ps int size);
void cleanupStack(Stack *ps);
void push(Stack *ps, int data);
int pop (struct stack *ps);

#endif
