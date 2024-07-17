//5086, 배수와 약수 20240625
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
어려운 문제는 아니지만, 조건을 만족하는 경우의 코드를 실행하고 구문을 탈출하는 특징을 가진 if-else if의 순서가 중요하다.
A=B=0인 경우 프로그램을 종료해야하는데, 이 조건을 가장 첫 번째로 사용하지 않으면 A % B 또는 B % A를 수행하는 과정에서
런타임 에러가 발생한다. (DivisionByZero)
*/