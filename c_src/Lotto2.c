#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void)
{	
	int num[45];
	srand(time(NULL));
	
	for(int i = 0; i < 46; ++i ){
		if(num[i] == num[i]){
			num[i] = rand() % 45 + 1;
		} else if(num[i] == num[i + 1]){
			num[i] = rand() % 45 + 1;
		
		}
	}

	printf("num : %d %d %d %d %d %d %d\n", 
	num[0], num[1], num[2], num[3], num[4], num[5], num[6]);

	return 0;
}
