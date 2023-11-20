#include<stdio.h>

int main(void)
{
	char name[21]; // << 맨뒤에 아스키코드0 값이 들어간다.
	//char buf[100];
	//char *name; // 대상을 가르키고 역참조 해야한다
	//name = buf;
	
	
	scanf("%20s", name); //scanf("%s", &name[0]); << 주소받아서 각각에 바이트에 아스키코드 받고 \0까지
	
	printf("%s\n", name); //printf("%s", &name[0]); << 주소값\0만날때 까지

	return 0;
}
