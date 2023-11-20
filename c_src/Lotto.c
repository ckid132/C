#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void)
{
	int lotto[7];
	
	srand(time(NULL));
	lotto[0] = rand() % 45 + 1;  //1
	
		do {
			lotto[1] = rand() % 45 + 1;
	}	while (lotto[0] == lotto[1]);   //2
	
		do {
			lotto[2] = rand() % 45 + 1;
	}	while (lotto[2] == lotto[0] || lotto[2] == lotto[1]); /// 3
	
		do {
			lotto[3] = rand() % 45 + 1;
	}	while (lotto[3] == lotto[0] || lotto[3] == lotto[1] 
				|| lotto[3] == lotto[2]); /// 4
	
		do {
			lotto[4] = rand() % 45 + 1;
	}	while (lotto[4] == lotto[0] || lotto[4] == lotto[1] 
				|| lotto[4] == lotto[2] || lotto[4] == lotto[3] ); /// 5
				
		do {
			lotto[5] = rand() % 45 + 1;
	}	while (lotto[5] == lotto[0] || lotto[5] == lotto[1] 
				|| lotto[5] == lotto[2] || lotto[5] == lotto[3] 
				|| lotto[5] == lotto[4] ); /// 6

		do {
			lotto[6] = rand() % 45 + 1;
	}	while (lotto[6] == lotto[0] || lotto[6] == lotto[1] 
				|| lotto[6] == lotto[2] || lotto[6] == lotto[3] 
				|| lotto[6] == lotto[4] || lotto[6] == lotto[5] ); /// 7

	printf("LOTTO : %d %d %d %d %d %d %d\n", 
	lotto[0], lotto[1], lotto[2], lotto[3], lotto[4], lotto[5], lotto[6]);
		


	return 0;
}
