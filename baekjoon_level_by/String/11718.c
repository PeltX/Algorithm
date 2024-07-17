//11718, 그대로 출력하기 20240613
#include<stdio.h>
int main()
{
	char str[100];
	
	while( fgets(str,100,stdin) != NULL ) //fgets는 EOF를 만날 경우 NULL을 리턴한다.
	{
		printf("%s", str);
	} 
}

/*
scanf는 입력 받은 개수 또는 -1(EOF를 만날 경우)을 리턴한다.
추가로, 입출력 API는 scanf/printf, fgets/puts, cin/cout 등으로 짝을 맞추어 사용하는 것이 좋다.
*/