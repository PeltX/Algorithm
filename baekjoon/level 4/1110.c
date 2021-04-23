// [1110] Add Cycle
#include<stdio.h>
int main(void)
{
	int N, ten, one, newone, newN, count=0;

	scanf("%d", &N);
	ten = N / 10; one = N % 10;
	while (1)
	{
		newone = (ten + one) % 10; 
		newN = one * 10 + newone;
		ten = newN / 10; one = newN % 10;
		count++;
		if (N == newN) break;
	}
	printf("%d", count);
}
