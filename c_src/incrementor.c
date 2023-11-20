#include <stdio.h>

int main(void)


{
	int a, b;
	
	a = 2;
	b = ++a;
	
	printf("a: %d \tb: %d\n", a, b);
	
	
	a = 2;
	b = a++;
	
	printf("a: %d \tb: %d\n", a, b);
	



	return 0;
}
