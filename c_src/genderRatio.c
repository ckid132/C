#include <stdio.h>

int main(void)


{
	int man, woman;
	//input
	scanf("%d", &man);
	scanf("%d", &woman);
	
	//double manRatio = 100.0 * man / (man + woman);
	//double womanRatio = 100.0 * woman / (man + woman);
	
	double manRatio = (double)man / (double) (man + woman) * (double)100 ;
	double womanRatio = (double)woman / (double)(man + woman) * (double) 100 ;
	
	printf("man : %d    woman : %d\n", man, woman);
	printf("sum : %d\n",man + woman);
	printf("manRatio : %.2f%% womanRatio %.2f%%\n", manRatio, womanRatio);



	return 0;
}
