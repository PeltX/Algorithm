// [1110] Add Cycle
#include<stdio.h>
int main(void)
{
	int N, ten, one, c, d, count=0;

	scanf("%d", &N);
	ten = N / 10; one = N % 10;
	while (1)
	{
		c = (ten + one) % 10; 
		d = one * 10 + c;
		ten = d / 10; one = d % 10;
		count++;
		if (N == d) break;
	}
	printf("%d", count);
}