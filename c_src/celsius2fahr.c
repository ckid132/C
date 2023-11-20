#include <stdio.h>

int main(void)

{
	double celsius;
	//celsius = 36;
	//scanf("%d", &celsius);
	scanf("%lf",&celsius);
	double fahr;
	fahr = 9.0 / 5.0 * celsius + 32 ; 
	
	
	
	//printf("celsius : %d ---> fahr : %.2f \n",celsius, fahr);
	printf("celsius : %f ---> fahr : %.2f \n",celsius, fahr);
	
	
	return 0;

}
