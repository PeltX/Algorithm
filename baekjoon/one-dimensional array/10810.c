//10810, 공 넣기 20240607
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, M, a, b, c, i, j;

	scanf("%d %d", &N, &M);
	int* arr = (int*)malloc(sizeof(int) * N);
	for (i = 0; i < N; i++)
	{
		arr[i] = 0;
	}

	for (i = 0; i < M; i++)
	{
		scanf("%d %d %d", &a, &b, &c);

		for (j = a; j <= b; j++)
		{
			arr[j - 1] = c;
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}

}
