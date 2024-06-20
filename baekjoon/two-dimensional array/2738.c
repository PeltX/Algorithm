//2738, 행렬 덧셈 20240619
#include<stdio.h>
int main()
{
	int N, M, arr[100][100], i, j, sum[100][100] = { 0 }, k;

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf("%d", &arr[i][j]);
			sum[i][j] += arr[i][j];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf("%d", &arr[i][j]);
			sum[i][j] += arr[i][j];
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
}
