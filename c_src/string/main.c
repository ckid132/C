#include <stdio.h>
#include <string.h>


int main(void)
{
	char *str1 = "hello";
	char str2[6];
	
	//str2 = str1;
	
	printf("str1 len : %ld\n", strlen(str1));
	
	strcpy(str2, str1); // 문자열 함수 배열 배열 치환  놓고자하는것 배열 사이즈가 커야함
	
	printf("str2 : %s\n", str2);
	
	//str == str2 //same address???
	if(strcmp(str1, str2) == 0) {
		printf("str1 and str2 are equal\n");
	}else {
		printf("str1 and str2 are not equal\n");
	}		
	
	char *title = "just the way you are";
	char *singer = "billy joel";
	char result[100];
	strcpy(result, title);
	strcat(result, " - ");
	strcat(result, singer); //concatenation
	
	printf("result : %s\n", result);
	

	return 0;
}



	//char buf[100];
	//char *name = buf;
	//char name[21];
	//scanf("%20s" name); // 주소값 받아서 해당하는 위치로 각각의 byte 

	//printf("%s", name); // 각각 1바이트씩 가져와서 아스키코드로 문자출력하고 마지막 \0까지 출력
	
	
	
	
	
	
	
	
	
	
	
