//2720, ��Ź�� ���� ���� 20240622
#include<stdio.h>
int main()
{
	int T, C, Qu=0, Di=0, Ni=0, Pe=0;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &C);

		Qu = C / 25;
		C -= Qu * 25;
		Di = C / 10;
		C -= Di * 10;
		Ni = C / 5;
		Pe = C - Ni * 5;
		printf("%d %d %d %d\n", Qu, Di, Ni, Pe);
	}	
}
//������ ������ �ּҰ� �Ƿ��� ū ������ ó���ؾ��Ѵ�.