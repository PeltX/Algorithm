// [11021] A+B - 7
#include<stdio.h>
int main(void)
{
	int a, b, i, num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}

}