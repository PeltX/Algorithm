//2587, ��ǥ��2 20240709
#include<stdio.h>
int main()
{
	int arr[5], i, j, tmp, sum=0, avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}

	//���� ����
	for (i = 0; i < 4; i++) //�迭�� ��ȸ�ϴ� �� Ƚ���� 4ȸ
	{
		for (j = 0; j < 4 - i; j++) //���� ��ȸ �� 4ȸ ��. 1ȸ ��ȸ�� ������ ���� ��ȸ �� ���� �迭 ���� -1
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