//5597, ���� �� ���� ��..? 20240608 ��
#include<stdio.h>
int main()
{
	int arr[30] = { 0 }, n, i, j, narr[2], cnt=0;

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &n);
		arr[n-1] = 1; //�Է¹��� ���� �迭�� index�� ����ϱ�, OX�� ���� ���� ������ 1�� 0
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