//14681, 사분면 고르기 20240603
#include<stdio.h>

int main()
{
	int x,y;

	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0 && y > 0) printf("1");
	if (x < 0 && y > 0) printf("2");
	if (x < 0 && y < 0) printf("3");
	if (x > 0 && y < 0) printf("4");

}
