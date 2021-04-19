// [8393] гу
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