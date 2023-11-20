#include <stdio.h>

int main(void)

{
	int width;
	int height;
	
	//scanf("%d",&width);
	//scanf("%d",&height);
	scanf("%d %d",&width,&height);
	
	double area = 1.0 / 2.0 * width * height ;
	
	printf("area : %.1lf \n",area);


	return 0;
}
