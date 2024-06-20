//2566, 최댓값 20240619
#include<stdio.h>
int main()
{
	int arr[9][9], i, j, max=-1, a, b; // a행, b열

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j])
			{
				max = arr[i][j];
				a = i+1, b = j+1;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", a, b);
}
