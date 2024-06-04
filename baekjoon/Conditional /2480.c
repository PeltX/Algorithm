//2480, 주사위 세개 20240604
#include<stdio.h>

int main()
{
	int x, y, z, prize;
	int same, big;

	scanf("%d %d %d", &x, &y, &z);

	if (x == y && y == z) // 같은 눈이 3개
		prize = 10000 + x * 1000;
	
	else if ((x == y || y == z || x == z) && !(x == y && y == z)) // 같은 눈이 2개
	{
		if (x == y)
			same = x;
		else if (y == z)
			same = y;
		else
			same = z;
		
		prize = 1000 + same * 100;
	}

	else // 모두 댜른 눈
	{
		big = (x > y) ? x : y;

		big = (big > z) ? big : z;
		prize = big * 100;
	}
	printf("%d", prize);

}

/*
		같은 눈이 2개인 경우에서 아래를 통해 같은 눈을 구할 수 있다. 
		same = (x == y) ? x : 0;
		same = (y == z) ? y : same;
		same = (x == z) ? z : same;
		모두 다른 눈의 경우도 if 조건문을 통해 구할 수 있다.
*/
