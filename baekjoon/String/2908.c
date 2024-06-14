//2908, 상수 20240612
#include<stdio.h>
int main()
{
	int A, B;
	char a[4], b[4];
	char tmp;

	scanf("%s %s", a, b);

	tmp = a[0];
	a[0] = a[2];
	a[2] = tmp;

	tmp = b[0];
	b[0] = b[2];
	b[2] = tmp;

	A = 100 * (a[0] - 48) + 10 * (a[1] - 48) + a[2] - 48;
	B = 100 * (b[0] - 48) + 10 * (b[1] - 48) + b[2] - 48;
	printf("%d", (A > B) ? A : B);
}
