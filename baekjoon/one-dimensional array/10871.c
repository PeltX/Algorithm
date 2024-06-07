//10871, X보다 작은 수 20240607
#include<stdio.h>

int main()
{
	int arr[10000], N, X, i;
	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < N - 1; i++)
	{
		if (arr[i] < X) printf("%d ", arr[i]);
	}
}