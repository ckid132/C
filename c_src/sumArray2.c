#include <stdio.h>

int sumArray(int *pArr, int size)
//int sumArray(int pArr[], int size)
//int sumArray(int pArr[10], int size)

{
	int sum = 0;
	for(int i = 0; i < size; ++i){
		sum = sum + pArr[i];  	//*(pArr +i)
	}
	
	
	return sum;
}


int main(void)

{
//	int num = 100;
	int nums[10] = {50, 30, 100, 10, 20, 60, 40, 70, 90, 80}; // inutualized list
	
	//int sum = sumArray(nums, 10); 		// sumArray(&nums[0]);
	
		int sum = sumArray(nums + 5, 5);		// &nums[5] == nums + 5
		printf(" sum : %d\n", sum);

	return 0;
}
