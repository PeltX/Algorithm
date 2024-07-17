#include<stdio.h>
int main()
{
	int N, i, j, tmp=2, cnt = 0, k=1;

	scanf("%d", &N);

	while (N != 1) //소인수분해가 불가능할 때까지
	{
		for (i = 2; i <= N; i++)
		{
			if (N % i == 0) //N의 가장 작은 인수 탐색
			{
				N /= i;
				if (tmp != i) //이전과 다른 인수가 들어올 경우
				{
					//모아둔 cnt 값을 곱하고 초기화
					k *= (cnt+1); 
					cnt = 0;
					tmp = i; //tmp에 새로운 인수 저장
				}
				cnt++;
				printf("%d %d\n", cnt, i);
				break; //인수 출력 후 for 문 탈출
			}
		}
	}
	k *= (cnt + 1); //마지막에 저장된 cnt
	printf("%d", k);
}
//N의 약수의 개수는 N을 소인수분해 했을때, 각 인수의 지수 + 1을 모두 곱한 값이다.