//15552, 빠른 A+B 20240605 
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
