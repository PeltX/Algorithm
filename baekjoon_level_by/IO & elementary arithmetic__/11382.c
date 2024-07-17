//11382, 꼬마 정민 20240602
#include<stdio.h>

int main()
{
	long long a, b, c; //자료형 유의. A, B, C의 범위가 1~10^12임을 생각하자  
	scanf("%lld %lld %lld", &a, &b, &c); 
	printf("%lld", a + b + c);
}
