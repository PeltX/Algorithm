//1427, ��Ʈ�λ��̵� 20240710
#include<stdio.h>
int main()
{
	int N, arr[10], i=0, j, tmp;
	scanf("%d", &N);
	
	while (N != 0) //N�� �ڸ��� ���� ������
	{
		arr[i] = N % 10;
		N /= 10;
		i++;
	}

	int E = i;

	//���� ����
	for (i = 0; i < E - 1; i++) //�迭�� ��ȸ�ϴ� �� Ƚ���� N-1ȸ
	{
		for (j = 0; j < E - 1 - i; j++) //���� ��ȸ �� N-1ȸ ��. 1ȸ ��ȸ�� ������ ���� ��ȸ �� ���� �迭 ���� -1
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