// [2438] 별 찍기 - 1 별을 찍는 문제 1
#include<stdio.h>
int main(void)
{
	int i, j, num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}