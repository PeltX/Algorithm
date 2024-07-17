// [2439] º° Âï±â - 2
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