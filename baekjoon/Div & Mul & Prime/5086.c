//5086, ����� ��� 20240625
#include<stdio.h>
int main()
{
	int A, B;


	while (1) 
	{
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0)
			break;
		else if (B % A == 0)
			printf("factor\n");
		
		else if (A % B == 0)
			printf("multiple\n");
		
		else
			printf("neither\n");
	}
	return 0;
}
/*
����� ������ �ƴ�����, ������ �����ϴ� ����� �ڵ带 �����ϰ� ������ Ż���ϴ� Ư¡�� ���� if-else if�� ������ �߿��ϴ�.
A=B=0�� ��� ���α׷��� �����ؾ��ϴµ�, �� ������ ���� ù ��°�� ������� ������ A % B �Ǵ� B % A�� �����ϴ� ��������
��Ÿ�� ������ �߻��Ѵ�. (DivisionByZero)
*/