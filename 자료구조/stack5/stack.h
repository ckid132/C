#ifndef STACK_H
#define STACK_H

typedef struct stack
{
   //int *pArr;
   void *pArr; // save adderess
   int eleSize;
   int size;
   int tos;
} Stack;

void initStack(Stack *ps, int size, int eleSize);
void cleanupStack(Stack *ps);

//void push(Stack *ps, int data);
//int pop(Stack *ps);
//void pop(Stack *ps, int *pResult);

void push(Stack *ps, const void *pData);
void pop(Stack *ps, void *pResult);

#endif
