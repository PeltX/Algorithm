// [8393] �� - 1���� N������ ���� ���ϴ� ����. ���� �ݺ��� ���� Ǯ ���� �ֽ��ϴ�.
#include<stdio.h>
int main(void)
{
	int sum=0,i, num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		sum += i;
	}
	printf("%d", sum);
}