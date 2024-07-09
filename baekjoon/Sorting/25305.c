//25305, 커트라인 20240710
#include<stdio.h>
int main()
{
	int N, k, score[1000] = { 0 }, i, j, tmp;
	scanf("%d %d", &N, &k);

	for (i = 0; i < N; i++)
		scanf("%d", &score[i]);

	for (i = 0; i < N-1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (score[j] > score[j + 1])
			{
				tmp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = tmp;
			}
		}
	}
	printf("%d", score[N - k]);
}