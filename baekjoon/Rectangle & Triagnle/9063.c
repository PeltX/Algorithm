//9063, ���� 20240628
#include<stdio.h>
int main()
{
	int N, x[100000], y[100000], xmin, ymin, xmax, ymax, i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d %d", &x[i], &y[i]);
	
	//�ʱⰪ ����. ���� �ϳ��� �־��� ��� �ּ�=�ִ��̹Ƿ� ���̸� ���ϴ� �������� 0 ��� ����
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