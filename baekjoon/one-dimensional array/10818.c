//10818, 최소, 최대 20240607
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, i, max, min;
	int* arr;
	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0], min = arr[0];

	for (i = 1; i < N; i++)
	{
		max = (arr[i] > max) ? arr[i] : max;
		min = (arr[i] < min) ? arr[i] : min;
	}

	printf("%d %d", min, max);
	free(arr);
}