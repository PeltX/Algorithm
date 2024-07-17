//5597, 과제 안 내신 분..? 20240608 ★
#include<stdio.h>
int main()
{
	int arr[30] = { 0 }, n, i, j, narr[2], cnt=0;

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &n);
		arr[n-1] = 1; //입력받은 값을 배열의 index로 사용하기, OX의 가장 빠른 구분은 1과 0
	}

	for (i = 0; i < 30; i++)
	{
		if (arr[i] == 0)
		{
			narr[cnt] = i + 1;
			cnt++;
		}
	}
	
	for (i = 0; i < 2; i++)
	{
		printf("%d\n", narr[i]);
	}
}