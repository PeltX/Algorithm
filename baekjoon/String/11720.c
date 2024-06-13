//11720, 숫자의 합 20240611
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, sum = 0;
	char arr[100];

	scanf("%d", &n);
	scanf("%s", arr);

	for (int i = 0; i < n; i++)
	{
		sum += arr[i] - 48;
	}
	printf("%d", sum);
}