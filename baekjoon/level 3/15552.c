// [15552] 빠른 A + B - 빠르게 입력받고 출력하는 문제
#include<stdio.h>
int main(void)
{
	int a, b, i, num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

}