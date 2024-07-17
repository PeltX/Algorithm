//2587, 대표값2 20240709
#include<stdio.h>
int main()
{
	int arr[5], i, j, tmp, sum=0, avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}

	//버블 정렬
	for (i = 0; i < 4; i++) //배열을 순회하는 총 횟수는 4회
	{
		for (j = 0; j < 4 - i; j++) //최초 순회 시 4회 비교. 1회 순회할 때마다 다음 순회 시 비교할 배열 개수 -1
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	avg = sum / 5;
	printf("%d\n%d", avg, arr[2]);
}