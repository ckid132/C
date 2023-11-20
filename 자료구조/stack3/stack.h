#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100
//typedef unsigned long size_t;
//size_t len;
// unsigned long len;

typedef struct stack {
	int array[ARRAYSIZE];
	int tos;

} Stack;

void initStack(Stack *ps);

void push(Stack *ps, int data);
int pop (struct stack *ps);

#endif
