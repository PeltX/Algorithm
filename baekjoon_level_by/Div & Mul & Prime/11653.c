//11653, ���μ����� 20240626
#include<stdio.h>
int main()
{
	int N, i, j, cnt = 0;

	scanf("%d", &N);
	
	while (N != 1) //���μ����ذ� �Ұ����� ������
	{
		for (i = 2; i <= N; i++) 
		{
			if (N % i == 0) //N�� ���� ���� �μ� Ž��
			{
				N /= i;
				printf("%d\n", i);
				break; //�μ� ��� �� for �� Ż��
			}
		}
	}	
}