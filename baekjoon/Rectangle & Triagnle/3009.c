//3009, 네 번째 점 20240627
#include<stdio.h>
int main()
{
	int x[4], y[4], i, xcnt=0, ycnt=0, xtmp[2], ytmp[2];

	for (i = 0; i < 3; i++)
		scanf("%d %d", &x[i], &y[i]);

	xtmp[0] = x[0], ytmp[0] = y[0]; //저장소에 처음 x, y 좌표 저장

	for (i = 1; i < 3; i++) //2, 3번째 좌표와 저장소 값 대조. 저장소 값과 다른 경우 두 번째 x, y 좌표로 저장
	{
		if (x[i] != xtmp[0])
			xtmp[1] = x[i];
		if (y[i] != ytmp[0])
			ytmp[1] = y[i];
	}

	for (i = 0; i < 3; i++) //어떤 좌표가 두 번 나왔는지 탐색
	{
		if (x[i] == xtmp[0])
			xcnt++;
		if (y[i] == ytmp[0])
			ycnt++;
	}

	if (xcnt == 2)
		printf("%d ", xtmp[1]);
	else
		printf("%d ", xtmp[0]);

	if (ycnt == 2)
		printf("%d", ytmp[1]);
	else
		printf("%d", ytmp[0]);
}