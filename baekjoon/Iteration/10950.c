//10950, A+B-3 20240604
#include<stdio.h>

int main()
{
	int i,t, a, b;
	
	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

} 
