//2750, �� �����ϱ� 20240709
#include<stdio.h>
int main()
{
	int N, arr[1000], i, j, tmp;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	//���� ����
	for (i = 0; i < N-1; i++) //�迭�� ��ȸ�ϴ� Ƚ���� N-1ȸ
	{
		for (j = 0; j < N-1-i; j++) //���� ��ȸ �� N-1ȸ ��. 1ȸ ��ȸ�� ������ ���� ��ȸ �� ���� �迭 ���� -1
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