//2675, ���ڿ� �ݺ� 20240613
#include<stdio.h>
int main()
{
	int T, R, i, j, cnt;
	char str[20], pstr[160];
	scanf("%d", & T);
	
	for (i = 0; i < T; i++)
	{
		cnt = 0;
		scanf("%d", &R);
		scanf("%s", str);

		while (str[cnt] != NULL)
		{
			for (j = 0; j < R; j++)
			{
				pstr[j+R*cnt] = str[cnt];  // �ݺ�Ƚ�� * cnt�� ���������ν� ���ڸ� ������ �ε����� �̵�
			}
			cnt++;
		}
		pstr[R * cnt] = NULL; // pstr ���ڿ��� ���� NULL ���� �߰� (���ڿ� ��� �� NULL ���� �������� ����ϹǷ�)
		printf("%s\n",pstr);
	}
}

/* ������ �ǵ��ʹ� ��¦ �ٸ�����, �Ʒ��� ���� ����� ���ؼ��� ���� ����� ����� �� �ִ�.
while (str[cnt] != NULL)
		{
			for (j = 0; j < R; j++)
			{
				printf("%c", str[cnt]);
			}
			cnt++;
		}
		printf("\n");
*/