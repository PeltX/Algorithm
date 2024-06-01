//2588, 곱셈 20240602
#include<stdio.h>

int main()
{
	int a, b;
	int h, t, o;

	scanf("%d %d", &a, &b);

	h = b / 100;
	t = (b - 100 * h) / 10;
	o = b - (100 * h) - (10 * t);
	printf("%d\n", a * o);
	printf("%d\n", a * t);
	printf("%d\n", a * h);
	printf("%d", a * b);
}
