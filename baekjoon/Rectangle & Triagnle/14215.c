//14215, �� ���� 20240629
#include<stdio.h>
int main()
{
	int a, b, c, sum=0, max;
	scanf("%d %d %d", &a, &b, &c);
	
	//���� �� ����
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	//������ �� ���� ��
	if (max == a)
		sum = b + c;
	else if (max == b)
		sum = a + c;
	else
		sum = a + b;

	//������ �� ���� �� > ���� �� �� �̾�� �ϹǷ�
	if (sum > max)
		printf("%d", a + b + c);
	else
		printf("%d", 2 * sum - 1); //�� ���� ������ �ִ��� ������ �� ���� �� - 1
}
/*
�ﰢ�� �ѷ��� �ִ�� �ؾ��ϹǷ�, �� ���븦 �߶��� �� ���� �� �ִ� �ִ��� �ʿ��ϴ�.
*/