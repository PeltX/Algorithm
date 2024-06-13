//1546, 평균 20240609
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, i, M=0, sum=0;
	int* score;
	double * nscore;
	double nsum=0;
	double avg;
	scanf("%d ", &N);
	score = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
		M = (score[i] > M) ? score[i] : M; // ÃÖ´ñ°ª
		sum += score[i];
	}
	nsum = (double)sum / M * 100;
	avg = nsum / N;
	printf("%lf",avg);
}
