#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int lotto [7];
	srand(time(NULL);
	for ( int i = 0; i < 7; ++i){
		lotto[i] = rand() % 45 + 1;	
		
		
		int j;
			for (int j = 0; j < i; ++j) {
				if ( lotto[i] == lotto[j]) 
					break;
				
			}
			
			if(j < i)
				continue;
	}
	for (int i = 0; i < 7; ++i){
	printf("%2d ", lotto[i]);
}
return 0;
}
