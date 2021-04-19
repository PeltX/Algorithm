// [8393] 합 - 1부터 N까지의 합을 구하는 문제. 물론 반복문 없이 풀 수도 있습니다.
#include<stdio.h>
int main(void)
{
	int sum=0,i, num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		sum += i;
	}
	printf("%d", sum);
}