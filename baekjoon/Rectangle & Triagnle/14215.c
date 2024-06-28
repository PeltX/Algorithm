//14215, 세 막대 20240629
#include<stdio.h>
int main()
{
	int a, b, c, sum=0, max;
	scanf("%d %d %d", &a, &b, &c);
	
	//가장 긴 막대
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	//나머지 두 변의 합
	if (max == a)
		sum = b + c;
	else if (max == b)
		sum = a + c;
	else
		sum = a + b;

	//나머지 두 변의 합 > 가장 긴 변 이어야 하므로
	if (sum > max)
		printf("%d", a + b + c);
	else
		printf("%d", 2 * sum - 1); //긴 막대 길이의 최댓값은 나머지 두 변의 합 - 1
}
/*
삼각형 둘레를 최대로 해야하므로, 긴 막대를 잘랐을 때 가질 수 있는 최댓값이 필요하다.
*/