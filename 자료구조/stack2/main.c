#include <stdio.h>
#include "stack.h"
//전역공간 배열은 0으로 초기화 가능

int main(void)
{
	push(100);
	push(200);
	push(300);
	
	printf("1st pop() : %d\n", pop() );
	printf("2st pop() : %d\n", pop() );
	printf("3st pop() : %d\n", pop() );
	
	return stack[tos];
}
