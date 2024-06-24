//2501, 약수 구하기 20240625
#include<stdio.h>
int main()
{
	int N, K, cnt = 0, i, div[65] = { 0 };

	scanf("%d %d", &N, &K);

	for (i = 1; i <= N; i++) //0으로 나눌 수 없고, N % N 까지 계산해야 하므로
	{
		if (N % i == 0)
		{
			div[cnt] = i;
			cnt++;//약수의 개수 카운터
		}
	}

	if (cnt < K)
		printf("0"); //약수의 개수 < K인 경우 0 출력
	else
		printf("%d", div[K - 1]);
}
/*
10000 이하의 자연수가 가질 수 있는 약수의 개수의 최댓값은 64개라고 한다.
*/