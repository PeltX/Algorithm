//24313, �˰��� ���� - ������ ǥ�� 1 20240703
#include<stdio.h>
int main()
{
	int f_n, f, c, n_0, n, i, f_n0, cg_n0, cg_inf, f_inf, cnt = 0; //g(n)=n. ��� n>= n_0�� ���� c x g(n) - f(n) >=0�� �� On�� ����.

	scanf("%d %d", &f_n, &f);
	scanf("%d", &c);
	scanf("%d", &n_0);
	 
	//case 1: n=n_0�� �� c x g(n)�� f(n)
	cg_n0 = c * n_0; //c x g(n_0)
	f_n0 = f_n * n_0 + f; //f(n_0)

	//case 2: n=inf�� �� c x g(n)�� f(n)
	cg_inf = c * 100;
	f_inf = f_n * 100 + f;

	//case 1�� case 2�� ���� c x g(n) - f(n) >= 0�� ��� �����ϴ��� Ȯ��
	if (cg_n0 - f_n0 >= 0)
		cnt++;
	if (cg_inf - f_inf >= 0)
		cnt++;

	if (cnt == 2)
		printf("1");
	else
		printf("0");
}