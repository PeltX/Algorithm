//11650, 좌표 정렬하기 20240711
#include<stdio.h>
int main()
{
	int N, x[100000], y[100000];
	int i, j, xtmp, ytmp;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}

	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (x[j] > x[j + 1])
			{
				//x좌표를 기준으로 "점" 정렬
				xtmp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = xtmp;
				ytmp = y[j];
				y[j] = y[j + 1];
				y[j + 1] = ytmp;
			}
		}
	}

	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (x[j] == x[j + 1])
			{
				if (y[j] > y[j + 1])
				{
					ytmp = y[j];
					y[j] = y[j + 1];
					y[j + 1] = ytmp;
				}
			}
		}
	}

	for (i = 0; i < N; i++)
		printf("%d %d\n", x[i], y[i]);
}

/* 
백준에서는 위 코드로 시간초과를 받는다. 시간 제한을 지킬 수 있는 코드는 11651.cpp에 내장 함수를 이용해 구현했다.
*/