//2739, 구구단 20240604
#include<stdio.h>

int main()
{
	int num, i;

	scanf("%d", &num);

	for (i = 0; i < 9; i++)
	{
		printf("%d * %d = %d\n", num, i + 1, num * (i + 1));
	}
}
