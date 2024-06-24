//9506, 약수들의 합 20240625
#include<stdio.h>
int main()
{
	int n, i, div[130] = { 0 }, cnt, sum;
	while (1)
	{
		scanf("%d", &n);
		if (n == -1) break; //-1 입력시 종료
		cnt = 0, sum = 0; //카운터와 합산 초기화

		for (i = 1; i < n; i++) //0으로 나누지 않아야하고, 자신을 제외한 약수이므로 n으로 나눌 필요 없다.
		{
			if (n % i == 0)
			{
				div[cnt] = i;
				cnt++; //약수 개수 카운터
				sum += i; //약수 합산
			}
		}

		
		if (sum == n) //n이 완전수인 경우
		{
			printf("%d = ", n);
			
			//마지막 항은 for 문 밖에서 출력하는 것이 편하다(+ 기호를 빼야하므로)
			for (i = 0; i < cnt-1; i++)
			{
				printf("%d + ", div[i]);
			}
			printf("%d\n", div[cnt - 1]);
		}
		else //n이 완전수가 아닌 경우
		{
			printf("%d is NOT perfect.\n",n);
		}
		
	}
}
//10만 이하에서 약수 개수의 최댓값은 128이다.