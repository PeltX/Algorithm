// [10871] X보다 작은 수
#include<stdio.h>
int main(void)
{
	int i, N, X, num;
	scanf("%d %d", &N, &X);
	for (i = 1; i <= N; i++)
	{
		scanf("%d", &num);
		if (num < X) printf("%d ", num);
	}
}