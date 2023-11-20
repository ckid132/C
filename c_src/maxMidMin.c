#include <stdio.h>

int main(void)

{	
	int a, b, c;
	int max, mid, min;
	
	printf("input num : ");
	scanf("%d %d %d", &a, &b, &c);
	
	/*
	min = a;
	if(b < min){
		min = b;
	}if(c < min){
		min = c;
	}
	
	max = a;
	if(b > max){
		max = b;
	}if(c > max){
		max = c;
	}
	
	mid = a + b + c - min - max;
	
	*/
	if (a > b) {
		if (c > a){
			printf("max : %d mid : %d mid %d", c, a, b);
		}
	} else if(c > b){
			printf("max : %d mid : %d mid %d", a, c, b);
	}else{
			printf("max : %d mid : %d mid %d", a, b, c);
		}
	}else{
			}if (c > b){
			printf("max : %d mid : %d mid %d", c, b, a);
			}else if(c > a){
			printf("max : %d mid : %d mid %d", b, c, a);
			}else{
			printf("max : %d mid : %d mid %d", b, a, c);
			}
			
	
	printf("MAX : %d\n",max);
	printf("MID : %d\n",mid);
	printf("MIN : %d\n",min);
	
	return 0;
}
