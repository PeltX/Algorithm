//10988, 팰린드롬인지 확인하기 20240615
#include<stdio.h>

int main()
{
	char str[101];
	int i, len=0, cnt=0;

	scanf("%s", str);

	while (str[len] != NULL)
	{
		len++;
	}
	
	for (i = 0; i < len / 2; i++)
	{
		if (str[i] == str[len - 1 - i]) //앞뒤에서 N번째에 있는 문자끼리 비교하면 되므로 문자열 길이의 1/2번 시행한다. (홀수의 경우 가운데 값을 비교할 필요 없으므로 1 작은 짝수와 같은 방식이다)
			cnt++;
		else
			break;
	}

	if (cnt == (len / 2))
		printf("1");
	else
		printf("0");
}