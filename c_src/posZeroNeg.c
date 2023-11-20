#include <stdio.h>

int main(void)


{
	int num;
	printf("input num : ");
	scanf("%d",&num);
	
	// positive or zero or negative
	if ( num > 0){
		printf("%d is a pisitive\n",num);
	} else if( num == 0){
		printf("%d is a Zero\n",num);
	}	else{
		printf("%d is a negative\n",num);
		
	}
	
	//printf("%d is a %s\n", num, 
	//(num > 0) ? "psitive" : (num == 0) ? "zero" or "negative");

	return 0;

}
