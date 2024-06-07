//10813, 공 바꾸기 20240608
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, M, a, b, i, j, temp;

	scanf("%d %d", &N, &M);
	int* arr = (int*)malloc(sizeof(int) * N);
	for (i = 0; i < N; i++)
	{
		arr[i] = i+1;
	}

	for (i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		temp = arr[a-1];
		arr[a-1] = arr[b-1];
		arr[b-1] = temp;
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}

}