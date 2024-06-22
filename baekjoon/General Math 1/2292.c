//2292, 벌집 20240622
#include<stdio.h>
#include<math.h>
int main()
{
	int N, i, a[20000], b[20000];
	scanf("%d", &N);
	
	if (N == 1)
		printf("1");
	else
	{
		for (i = 0; i < 20000; i++)
		{
			a[i] = 2 + 3 * (i+1) * i;
			b[i] = 1 + 3 * (i + 1) * (i + 2);

			if (a[i] <= N && N <= b[i])
			{
				printf("%d", i + 2);
				break;
			}
		}
	}
}
/*
시작점과 끝점의 일반항을 각각 구할 수 있다.
1인 경우는 시작과 끝이 하나이므로 제외하고,

2~7(6)
8~19(12)
20-37(18)
38-61(24)
62~97(36)
...
2+3n(n-1) ~ 1+3n(n+!)이고,
n=k일 때 지나야 하는 방의 개수의 최솟값은 k+1이다.
위의 for 문에서는 i=0부터 시작하므로 n=i+1로 생각하자.
*/