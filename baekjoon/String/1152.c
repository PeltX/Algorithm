//1152, �ܾ��� ���� 20240612
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[1000000];
	scanf("%[^\n]s", str); // %[^\n]�� �̿��ϸ� ������ ������ �Է¹��� �� ����
	int i, cnt=0, len = strlen(str);
	
	if (str[0] == ' ')
		cnt--;
	if (str[len - 1] == ' ')
		cnt--;


	for (i = 0; i < len; i++)
	{
		
		if (str[i] == ' ')
			cnt++;
	}
	printf("%d", cnt+1);
}