//10988, �Ӹ�������� Ȯ���ϱ� 20240615
#include<stdio.h>

int main()
{
	char str[101];
	int i, len=0, cnt=0;

	scanf("%s", str);

	while (str[len] != NULL)
	{
		len++;
	}
	
	for (i = 0; i < len / 2; i++)
	{
		if (str[i] == str[len - 1 - i]) //�յڿ��� N��°�� �ִ� ���ڳ��� ���ϸ� �ǹǷ� ���ڿ� ������ 1/2�� �����Ѵ�. (Ȧ���� ��� ��� ���� ���� �ʿ� �����Ƿ� 1 ���� ¦���� ���� ����̴�)
			cnt++;
		else
			break;
	}

	if (cnt == (len / 2))
		printf("1");
	else
		printf("0");
}