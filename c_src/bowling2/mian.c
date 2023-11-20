#include <stdio.h>


int main(void)
{

	int frameScores[11] = {0, };
	int scores[11][3] = {0, };
	
	int bonus; 		//10 frame  third cast.
	
	int scores[11][3]
	for(int i = 1; i <= 9; ++i){
		printf("%d frame first cast : ", i);
		scanf("%d", &scores[i][1]);
		
		//i-1 frame spare
		if (i >= 2 && scores[i-1][1] + scores[i-2][2] == 10 && scores[i-1][1] != 10){
				frameScores[i-1] = frameScores[i-2] + 10 + scores[i][1];

		printf("\t\t %d frame score : %d\n", i-1, frameScores[i-1]);

		
		//i-2 frame score
		}else if (i >= 3 && scores[i-2][1] == 10 && scores[i-1][1] == 10){
				frameScores[i-2] = frameScores[i-3] + 10 + (scores[i-1][1] + scores[i][1]);

		printf("\t\t %d frame score : %d\n", i-2, frameScores[i-2]);	

				
		}
		// second cast
		if(scores[i][1] != 10 || i == 10){
			printf("%d frame second cast : ", i);
			scanf("%d", &scores[i][2]);
			
			if(i >= 2 && scores[i-1][1] == 10) {
				frameScores[i-1] = frameScores[i-2] + 10 + (scores[i-1][1] + scores[i][2]);
			printf("%d frame score : %d\n", i-1, frameScores[i-1]);
			}
			
			if(scores[i][1] + scores[i][2] < 10) {
				frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2];
				printf("%d frame score : %d\n", i ,frameScores[i]);
			}
		}
		
		if(i == 10 && scores[i][1] + scores[i][2] >=10){
			printf("%d frame third cast : ", i);
			scanf("%d", &bonus);
			
			frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2] + bonus;
			printf ("%d frame score : %d\n", i, frameScores[10]);
		}
	}

			return 0;
}
