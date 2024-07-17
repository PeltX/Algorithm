//1085, 직사각형에서 탈출 20240627
#include<stdio.h>
int main()
{
	int x, y, w, h, len[4]; //x,y, w-x, h-y

	scanf("%d %d %d %d", &x, &y, &w, &h);
	len[0] = x;
	len[1] = y;
	len[2] = w - x;
	len[3] = h - y;
	
	int min = len[0];

	for (int i = 1; i < 4; i++)
		min = (len[i] < min) ? len[i] : min;
	
	printf("%d", min);
}
