//3003, ŷ, ��, ��, ���, ����Ʈ, �� 20240614
#include<stdio.h>
int main()
{
	int chess[6];
	int i;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &chess[i]);
	}
	for (i = 0; i < 2; i++)
		printf("%d ", 1 - chess[i]);
	
	for (i = 2; i < 5; i++)
		printf("%d ", 2 - chess[i]);
	
	printf("%d", 8 - chess[5]);
}