//2798, 블랙잭 20240704
#include<stdio.h>
int main()
{
	int N, M, arr[101], i, j, k, sum=0, cnt=1, max=0;

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]); 

	//중복을 막기 위한 구조
	for (i = 0; i < N-2; i++)
	{
		for (j = i+1; j < N-1; j++) 
		{
			for (k = j+1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (max < sum && sum <= M)
					max = sum;
			}
		}
	}
	printf("%d", max);
}
/*
브루트 포스(무차별 대입)는 가능한 모든 케이스를 탐색하며 조건을 만족하는 값을 구하는 알고리즘이다.
세 장의 카드를 선택하는 모든 경우의 수(NC3)를 바탕으로 각각의 합을 구한 뒤, M을 넘지 않는 최댓값을 찾아내는 문제이다.
단순하게 for 문을 설계해도 결과를 구할 수는 있지만(이 때 경우의 수는 N(N-1)(N-2)), 위와 같이 짜면 중복되는 경우를 배제하므로 보다 효율적인 브루트 포스가 가능하다. 
*/