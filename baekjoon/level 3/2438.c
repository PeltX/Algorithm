// [2438] º° Âï±â - 1
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