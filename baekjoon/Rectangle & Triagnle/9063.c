//9063, 대지 20240628
#include<stdio.h>
int main()
{
	int N, x[100000], y[100000], xmin, ymin, xmax, ymax, i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d %d", &x[i], &y[i]);
	
	//초기값 설정. 점이 하나만 주어질 경우 최소=최대이므로 넓이를 구하는 과정에서 0 출력 가능
	xmin = x[0];
	xmax = x[0];
	ymin = y[0];
	ymax = y[0];

	for (i = 1; i < N; i++)
	{
		xmin = (x[i] < xmin) ? x[i] : xmin;
		ymin = (y[i] < ymin) ? y[i] : ymin;

		xmax = (x[i] > xmax) ? x[i] : xmax;
		ymax = (y[i] > ymax) ? y[i] : ymax;
	}
	printf("%d", (xmax-xmin) * (ymax-ymin));
}