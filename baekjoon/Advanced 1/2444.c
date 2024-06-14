//2444, 별 찍기-7 20240614
#include<stdio.h>
int main()
{
	int N, i, j;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N-1-i; j++)
			printf(" ");
		for (j = 0; j < i + 1; j++)
		{
			if (j == 0)
				printf("*");
			else
				printf("**");
		}
		printf("\n");
	}

	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < i + 1; j++)
			printf(" ");
		for (j = 0; j < N - 1 - i; j++)
		{
			if (j == 0)
				printf("*");
			else
				printf("**");
		}
		if (i != N - 2) //¸¶Áö¸· °³Çà Á¦°Å
			printf("\n");
	}	
}
