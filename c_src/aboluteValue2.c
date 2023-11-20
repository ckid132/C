#include <stdio.h>

int main(void)


{
	int num;
	scanf("%d",&num);
	
	//int result = num or -num
	int result;
	if (num >= 0){
		result = num;
	}
	
	else {
		result = -num;
	
	}
	
/*	if (num <0){
	//-num
	}
	else{
	//num
	}
*/

printf("abolute value %d \n",result);
	return 0;
}
