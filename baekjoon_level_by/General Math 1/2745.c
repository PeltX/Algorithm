//2745, ���� ��ȯ 20240621
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char N[100];
	int i, B, bnum = 0;

	scanf("%s", N);
	scanf("%d", &B);
	int len = strlen(N);
	for (i = 0; i < len; i++)
	{
		//�� �ڸ����� ������ �ŵ������� ���� �ջ�
		if (N[i] >= 'A') //11���� �̻��� ����� ��, 10���� ǥ�Ⱑ �Ұ����� ����(A:11 ~ Z:36)
		{
			bnum += (N[i] - 55) * pow(B, len - i - 1);
		}

		if (N[i] <= '9') //10���� ǥ�Ⱑ ������ ����
		{
			bnum += (N[i] - 48) * pow(B, len - i - 1);
		}


	}
	printf("%d", bnum);
}