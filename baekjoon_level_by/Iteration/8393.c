//8393, 합 20240604
#include<stdio.h>

int main()
{
	int i,n, sum=0;

	scanf("%d", &n);

	for (i = n; i > 0; i--)
	{
		sum += i;
	}
	
	printf("%d", sum);

	
} 
