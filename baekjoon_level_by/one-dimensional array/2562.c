//2562, 최댓값 20240607
#include<stdio.h>

int main()
{
	int arr[9], max, idx, i;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 1; i < 9; i++)
	{
		max = (arr[i] > max) ? arr[i] : max;
	}

	for (i = 0; i < 9; i++)
	{
		if (arr[i] == max) idx = i + 1;
	}

	printf("%d\n", max);
	printf("%d", idx);
}

/*	아래와 같이 반복문 한 번으로 구할 수도 있다.
for (i = 0; i < 9; i++)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
			idx = i+1;
		}
	}
*/