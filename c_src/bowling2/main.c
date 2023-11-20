#include <stdio.h>


int main(void)
{

	int frameScores[11] = {0, };
	int scores[11][3] = {0, };
	
	int bonus; 		//10 frame  third cast.
	
	for(int i = 1; i <= 10; ++i){
		printf("%d frame first cast : ", i);
		scanf("%d", &scores[i][1]);
		
		//i-1 frame spare
		if (i >= 2 && scores[i-1][1] + scores[i-1][2] == 10 && scores[i-1][1] != 10){
				frameScores[i-1] = frameScores[i-2] + 10 + scores[i][1];
		printf("***************************************************\n");
		printf("\t\t %d frame score : %d\n", i-1, frameScores[i-1]);
		printf("***************************************************\n");

		
		//i-2 frame score
		}else if (i >= 3 && scores[i-2][1] == 10 && scores[i-1][1] == 10){
				frameScores[i-2] = frameScores[i-3] + 10 + (scores[i-1][1] + scores[i][1]);
		printf("***************************************************\n");
		printf("\t\t %d frame score : %d\n", i-2, frameScores[i-2]);
		printf("***************************************************\n");

				
		}
		// second cast
			if(scores[i][1] < 10 || i == 10){
		printf("%d frame second cast : ", i);
		scanf("%d", &scores[i][2]);
			
			if(i >= 2 && scores[i-1][1] == 10) {
				frameScores[i-1] = frameScores[i-2] + 10 + (scores[i][1] + scores[i][2]);
		printf("***************************************************\n");
		printf("\t\t %d frame score : %d\n", i-1, frameScores[i-1]);
		printf("***************************************************\n");
			}
			
			if(scores[i][1] + scores[i][2] < 10) {
				frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2];
		printf("***************************************************\n");
		printf("\t\t %d frame score : %d\n", i ,frameScores[i]);
		printf("***************************************************\n");
			}
		}
		
			if(i == 10 && scores[i][1] + scores[i][2] >=10){
		printf("%d frame bonus cast : ", i);
		scanf("%d", &bonus);
			
			frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2] + bonus;
		printf("***************************************************\n");
		printf ("\t\t %d frame score : %d\n", i, frameScores[10]);
		printf("***************************************************\n");
		}
	}

			return 0;
}
