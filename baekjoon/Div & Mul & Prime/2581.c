//2581, �Ҽ� 20240626
#include<stdio.h>
int main()
{
	int M, N, i, j, psum = 0, P, pmin=0;

	scanf("%d %d", &M, &N);

	for (i = M; i <= N; i++) //M �̻� N ����
	{
		if (i == 2) //�Ҽ� 2 ����ó��
		{
			psum += i;
			pmin = i;
		}
		
		else
		{
			for (j = 2; j < i; j++) //3 �̻��� �ڿ����� ���� �Ҽ� �Ǻ�
			{
				if (i % j == 0) //����� �����ϴ� ���
				{
					P = 0; //�Ҽ��� �ƴ�
					break;
				}
				P = 1; 
			}

			if (P == 1) //�Ҽ��� ���
			{
				if (pmin == 0) //�ּڰ��� ���Ե��� ���� ���. ������������ ������ �����ϹǷ�, ���ʷ� �������� �Ҽ��� �� �ּڰ��̴�.
					pmin = i;
				psum += i;
			}
		}
	}
	if (pmin == 0) //���� ���� �Ҽ��� �������� ����
		printf("-1");
	else
		printf("%d\n%d", psum, pmin);
}