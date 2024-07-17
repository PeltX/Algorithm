//2743, 단어 길이 재기 20240610
#include<stdio.h>

int main()
{
	char str[101]; //문자열 최대 100자 + NULL 문자
	int len = 0;

	scanf("%s", str);
	while (str[len] != NULL)
	{
		len++;
	}
	printf("%d", len);

}

// printf("%d", strlen(str)); strlen 함수를 이용해 바로 구할 수도 있다.