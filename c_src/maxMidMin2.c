#include <stdio.h>

int main(void)

{	
	int a, b, c;
	int max, mid, min;
	
	printf("input num : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b){
	max = a;
	min = b;
	} 	else {
	max = b;
	min = a;
	}
	
	if(c > max){
		mid = max;
		max = c;
	}	else if(c > min){
		mid = c;
		}else{
		mid = min;
		min = c;
	
	
	}
	
	printf("max : %d mid : %d min : %d\n", max, mid, min);
	
	return 0;
}
