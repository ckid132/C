#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL)); //seed
	for (int i = 1; i <= 45; ++i) {
		int num = rand() % 45 + 1;
		printf("num : %d\n", num);
	}

}
