//11718, �״�� ����ϱ� 20240613
#include<stdio.h>
int main()
{
	char str[100];
	
	while( fgets(str,100,stdin) != NULL ) //fgets�� EOF�� ���� ��� NULL�� �����Ѵ�.
	{
		printf("%s", str);
	} 
}

/*
scanf�� �Է� ���� ���� �Ǵ� -1(EOF�� ���� ���)�� �����Ѵ�.
�߰���, ����� API�� scanf/printf, fgets/puts, cin/cout ������ ¦�� ���߾� ����ϴ� ���� ����.
*/