//2750, 수 정렬하기 20240709
#include<stdio.h>
int main()
{
	int N, arr[1000], i, j, tmp;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	//버블 정렬
	for (i = 0; i < N-1; i++) //배열을 순회하는 횟수는 N-1회
	{
		for (j = 0; j < N-1-i; j++) //최초 순회 시 N-1회 비교. 1회 순회할 때마다 다음 순회 시 비교할 배열 개수 -1
		{
			if (arr[j] > arr[j + 1]) 
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
	for (i = 0; i < N; i++)
		printf("%d\n", arr[i]);
}