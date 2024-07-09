//1427, 소트인사이드 20240710
#include<stdio.h>
int main()
{
	int N, arr[10], i=0, j, tmp;
	scanf("%d", &N);
	
	while (N != 0) //N을 자리수 별로 나누기
	{
		arr[i] = N % 10;
		N /= 10;
		i++;
	}

	int E = i;

	//버블 정렬
	for (i = 0; i < E - 1; i++) //배열을 순회하는 총 횟수는 N-1회
	{
		for (j = 0; j < E - 1 - i; j++) //최초 순회 시 N-1회 비교. 1회 순회할 때마다 다음 순회 시 비교할 배열 개수 -1
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (i = E-1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
}