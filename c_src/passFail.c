#include <stdio.h>

int main(void)

{
	int score;
	
	printf("score : ");
	scanf("%d",&score);
	
	
	//int isPass = (score >=60);
	
	
	//printf("score : %d --------- pass : %d\n",score, isPass);
	
	if(score >= 60){
		printf("score %d ---- pass\n",score);
	
	} else {
		printf("score %d ---- fail\n",score);
	
	}
	


	return 0;
}