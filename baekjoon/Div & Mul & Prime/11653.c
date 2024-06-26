//11653, 소인수분해 20240626
#include<stdio.h>
int main()
{
	int N, i, j, cnt = 0;

	scanf("%d", &N);
	
	while (N != 1) //소인수분해가 불가능할 때까지
	{
		for (i = 2; i <= N; i++) 
		{
			if (N % i == 0) //N의 가장 작은 인수 탐색
			{
				N /= i;
				printf("%d\n", i);
				break; //인수 출력 후 for 문 탈출
			}
		}
	}	
}