// [11022] A+B-8 - A+B를 바로 위 문제보다 아름답게 출력하는 문제
#include<stdio.h>
int main(void)
{
	int a, b, i, num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}

}