//2581, 소수 20240626
#include<stdio.h>
int main()
{
	int M, N, i, j, psum = 0, P, pmin=0;

	scanf("%d %d", &M, &N);

	for (i = M; i <= N; i++) //M 이상 N 이하
	{
		if (i == 2) //소수 2 예외처리
		{
			psum += i;
			pmin = i;
		}
		
		else
		{
			for (j = 2; j < i; j++) //3 이상의 자연수에 대해 소수 판별
			{
				if (i % j == 0) //약수가 존재하는 경우
				{
					P = 0; //소수가 아님
					break;
				}
				P = 1; 
			}

			if (P == 1) //소수인 경우
			{
				if (pmin == 0) //최솟값이 대입되지 않은 경우. 오름차순으로 연산을 진행하므로, 최초로 구해지는 소수가 곧 최솟값이다.
					pmin = i;
				psum += i;
			}
		}
	}
	if (pmin == 0) //범위 내에 소수가 존재하지 않음
		printf("-1");
	else
		printf("%d\n%d", psum, pmin);
}