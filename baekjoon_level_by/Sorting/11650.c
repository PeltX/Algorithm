//11650, ��ǥ �����ϱ� 20240711
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
				//x��ǥ�� �������� "��" ����
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
���ؿ����� �� �ڵ�� �ð��ʰ��� �޴´�. �ð� ������ ��ų �� �ִ� �ڵ�� 11651.cpp�� ���� �Լ��� �̿��� �����ߴ�.
*/