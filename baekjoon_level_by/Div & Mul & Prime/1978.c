//1978, �Ҽ� ã�� 20240626
#include<stdio.h>
int main()
{
	int N, X, i, j, prime[168], cnt = 1, pcnt=0, ncnt=0;

	prime[0] = 2;
	for (i = 3; i < 1000; i++) //�Ҽ� ���� �迭
	{
		for (j = 0; j < cnt; j++)
		{
			if (i % prime[j] != 0)
				pcnt++;
		}
		
		if (pcnt == cnt)
		{
			prime[cnt] = i;
			cnt++;
		}
		pcnt = 0;
	}

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &X);

		for (j = 0; j < 168; j++)
		{
			if (X == prime[j]) //����� ���� ����
			{
				ncnt++;
				break;
			}
		}
	}
	printf("%d", ncnt);
}
/*

*/