#include <stdio.h>

int main(void)

{
	int kor, eng, math;
	
	printf("input kor? eng? math?");
	scanf("%d %d %d",&kor, &eng, &math);
	
	int sum;
	sum = kor + eng + math;

	double avg;
	avg = (double)(kor + eng + math) / 3.0;
	
	printf("sum : %d\t avg : %.1f \n",sum, avg);
	
	return 0;


}
