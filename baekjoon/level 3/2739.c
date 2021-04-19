// [2739] 구구단 - 구구단을 출력하는 문제 
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
}