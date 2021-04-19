// [2439] 별 찍기 - 2 별을 찍는 문제 2
#include<stdio.h>
int main(void)
{
	int k, i, j, num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = num ; j > i; j--)
			printf(" ");
		for (k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}
}