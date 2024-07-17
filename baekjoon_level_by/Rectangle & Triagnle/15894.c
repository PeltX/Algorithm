//15894, 수학은 체육과목 입니다 20240628
#include<stdio.h>
int main()
{
	long long n; //입력 범위가 ~10^9이므로, 넓이가 int 범위를 초과함.
	scanf("%lld", &n);
	printf("%lld", 4 * n);
}