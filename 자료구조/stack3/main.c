#include<stdio.h>
#include"stack.h"

int main(void)

{
	Stack s1, s2;
	//struct stack stacks[10];
	//s1.tos = 0;
	//s2.tos = 0;
	initStack(&s1);
	initStack(&s2);
	
	push(&s1, 100);
	push(&s1, 200);
	push(&s1, 300);
	
	printf("s1 1st pop() : %d\n", pop(&s1));
	printf("s1 2st pop() : %d\n", pop(&s1));
	printf("s1 3st pop() : %d\n", pop(&s1));
	
	
	push(&s2, 900);
	push(&s2, 800);
	push(&s2, 700);
	
	printf("s2 1st pop() : %d\n", pop(&s2));
	printf("s2 2st pop() : %d\n", pop(&s2));
	printf("s2 3st pop() : %d\n", pop(&s2));
	
	
	return 0;
}


/* //원하는 데이터를 찍고싶다 // 사용자 정의어 @@ 구조체 @@
struct stack{
	int array[100];
	int tos;

};
struct stack s1, s2;
struct stack stacks[10];

push(s1, 100); //바뀌는 수 << 인자사용 ㄱ
push(s2, 100);

*/
