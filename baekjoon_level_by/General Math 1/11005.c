//11005, ���� ��ȯ 2 20240621
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, B, i, mod, cnt = 0;
	char bch[100], tmp;

	scanf("%d %d", &N, &B);

	while (1)
	{
		mod = N % B;
		if (mod < 10)
		{
			bch[cnt] = mod + 48;
			cnt++;
		}
		if (mod >= 10)
		{
			bch[cnt] = mod + 55;
			cnt++;
		}
		N /= B;
		if (N == 0) //�� �̻� ���� �� ���� ��
			break;
	}

	bch[cnt] = NULL; //���ڿ��� ��

	for (i = 0; i < (cnt / 2); i++) //(���� ����� ������ ��) ���� ������ �������̹Ƿ� SWAP
	{
		tmp = bch[i];
		bch[i] = bch[cnt - i - 1];
		bch[cnt - i - 1] = tmp;
	}
	printf("%s", bch);
}

/* ������ �� �ش��ϴ� �κ��� ���� ó���� ���, ���� �ڵ�� ������ �� �ش��ϴ� �κ��� �� �� �� mod ���� �� �������� ó���Ѵ�.
	if (N < B)
		{
			if (N < 10)
			{
				bch[cnt] = N + 48;
				cnt++;
			}
			if (N >= 10)
			{
				bch[cnt] = N + 55;
				cnt++;
			}
			break;
		}
*/