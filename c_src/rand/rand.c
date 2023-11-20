static int seed;    //랜덤 함수의 시드값 .c파일안에서 만 사용 가능

void my_srand(int s) 		//func. definition함수 정의 
{	
	seed = s;

}
int my_rand(void)
{

	seed = seed * 1103515245 + 12345;
   return((unsigned)(seed/65536) % 32768);

}
