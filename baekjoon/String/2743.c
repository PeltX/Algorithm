//2743, �ܾ� ���� ��� 20240610
#include<stdio.h>

int main()
{
	char str[101]; //���ڿ� �ִ� 100�� + NULL ����
	int len = 0;

	scanf("%s", str);
	while (str[len] != NULL)
	{
		len++;
	}
	printf("%d", len);

}

// printf("%d", strlen(str)); strlen �Լ��� �̿��� �ٷ� ���� ���� �ִ�.