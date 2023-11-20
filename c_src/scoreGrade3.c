#include <stdio.h>

int main(void)


{
	int score;
	
	printf("input score : ");
	scanf("%d",&score);
	
	switch (score / 10 ){
	case 10 :
	case 9 :
			printf("score : %d ---- grade : A\n",score);// A
		break;
	case 8 :
			printf("score : %d ---- grade : B\n",score);// B
		break;
	case 7 :
			printf("score : %d ---- grade : C\n",score);// C
		break;
	case 6 :
			printf("score : %d ---- grade : D\n",score);// D
		break;
	default : //543210
			printf("score : %d ---- grade : F\n",score);// F
	
	}
	

	
	return 0;

}
