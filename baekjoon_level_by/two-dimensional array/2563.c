//2563,  ������ 20240620
#include<stdio.h>
int main()
{
	int x, y, arr[101][101] = { 0 }, i, j, k, T, sum=0;
	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &x, &y);
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				arr[y+j][x+k] = 1;
			}
		}
	}

	for (i = 0; i < 101; i++)
	{
		for (j = 0; j < 101; j++)
		{
			if (arr[i][j] == 1)
				sum++;
		}
	}
	printf("%d", sum);
}

/* �Ʒ��� ���� ������� 20�� for �� ���̵� �ذ� �����ϴ�.
if (!arr[y + j][x + k])
				{
					sum++;
					arr[y + j][x + k] = 1;
				}
*/