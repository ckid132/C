#include <stdio.h>

int main(void)


{
	int score;
	
	printf("input score : ");
	scanf("%d",&score);
	
	if (score >= 90) {
		printf("SCORE %d----> GRADE :A\n",score);
	}else if(score >= 80){
		printf("SCORE %d----> GRADE :B\n",score);
	}else if(score >= 70){
		printf("SCORE %d----> GRADE :C\n",score);
	}else if(score >= 60){
		printf("SCORE %d----> GRADE :D\n",score);
	}else{
		printf("SCORE %d----> GRADE :F\n",score);
	}
	return 0;

}
