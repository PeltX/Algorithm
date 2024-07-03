//24313, 알고리즘 수업 - 점근적 표기 1 20240703
#include<stdio.h>
int main()
{
	int f_n, f, c, n_0, n, i, f_n0, cg_n0, cg_inf, f_inf, cnt = 0; //g(n)=n. 모든 n>= n_0에 대해 c x g(n) - f(n) >=0일 때 On을 만족.

	scanf("%d %d", &f_n, &f);
	scanf("%d", &c);
	scanf("%d", &n_0);
	 
	//case 1: n=n_0일 때 c x g(n)과 f(n)
	cg_n0 = c * n_0; //c x g(n_0)
	f_n0 = f_n * n_0 + f; //f(n_0)

	//case 2: n=inf일 때 c x g(n)과 f(n)
	cg_inf = c * 100;
	f_inf = f_n * 100 + f;

	//case 1과 case 2에 대해 c x g(n) - f(n) >= 0을 모두 만족하는지 확인
	if (cg_n0 - f_n0 >= 0)
		cnt++;
	if (cg_inf - f_inf >= 0)
		cnt++;

	if (cnt == 2)
		printf("1");
	else
		printf("0");
}