//10809, ���ĺ� ã�� 20240612
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	int arr[26];
	char str[101], ch='a';
	scanf("%s", str);
	for (i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}

	for (i = 0; i < strlen(str); i++) //���ڿ� ���̸�ŭ ����
	{
		for (j = 0; j < 26; j++) //a~z�� ���� ����
		{
			if (str[i] == ch) //���� ���ڰ� � ���ĺ����� Ȯ�� 
			{
				if (arr[j] != -1) //j+1��° ���ĺ��� ó�� �����ߴ��� Ȯ��
					break;
				arr[j] = i; //j+1��° ���ĺ��� �ش��ϴ� ��ġ�� ���� ��ġ �� ����
			}
			ch++;
		}
		ch = 'a';
	}

	for (i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
}