//19532, 수학은 비대면강의입니다 20240706
#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, x, y, ans = 0;

	scanf("%d %d %d %d %d %d", & a, &b, &c, &d, &e, &f);

	//브루트 포스
	for (x = -999 ; x <= 999; x++)
	{
		for (y = -999; y <= 999; y++)
		{
			if (a * x + b * y == c && d * x + e * y ==f) //식 A와 식 B를 연립. 두 식은 같은 해를 가진다.
			{
				printf("%d %d", x, y);
				ans = 1; //상위 반복문 탈출을 위한 변수
				break;
			}
		}
		if (ans == 1) break;
	}
}
//연립방정식은 두 개 이상의 식이 "같은" 해를 가지는 방정식이므로, AND 연산으로 묶어준 후 브루트 포스를 사용하면 쉽게 해결할 수 있다.