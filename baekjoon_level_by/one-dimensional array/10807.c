//10807, 개수 세기 20240607
#include<stdio.h>
int main(void)
{
	int arr[100], N, i, V, cnt=0;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d ", &arr[i]);
	}

	scanf("%d", &V);

	for (i = 0; i < N; i++)
	{
		if (arr[i] == V) cnt++;
	}
	printf("%d", cnt);

}
