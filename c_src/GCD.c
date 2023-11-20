#include <stdio.h>

int gcd(int a, int b) 
{
	int r;
	//r = a % b;
	
	
	while (r = a % b /*!= 0*/){
		a = b;
		b = r;
	}
	
	return b;
	
}

int main() 
{

	int a, b
	 printf("inPut 2 nums : ");
    scanf("%d %d", &a, &b);
    
    int result = gcd(a, b);
    printf("result : %d\n", result);
    
    return 0;
}
