//1193, 분수찾기 20240624
#include<stdio.h>
int main()
{
	int X, a[4501], b[4501], d;
	int i, j;

	scanf("%d", &X);

	for (i = 0; i < 4500; i++)
	{
		//시작점과 끝점의 값이 계차수열로 표현된다.
		a[i] = ((i + 1) * (i + 1) - (i + 1) + 2) / 2;
		b[i] = ((i + 1) * (i + 1) + (i + 1)) / 2;

		if (a[i] <= X && X <= b[i]) //ex X=9
		{
			if (i % 2 == 0) //짝수줄 (0, 2, 4...)은 아래에서 위로
			{
				d = X - a[i];
				printf("%d/%d", i + 1 - d, 1 + d);
			}
			else //홀수줄 (1, 3, 5...)은 위에서 아래로
			{
				d = X - a[i];
				printf("%d/%d", 1 + d, i + 1 - d);
			}
			break;
		}
	}
}