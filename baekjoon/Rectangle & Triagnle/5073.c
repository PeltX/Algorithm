//5073, 삼각형과 세 변 20240629
#include<stdio.h>.
int main()
{
	int a, b, c, max;
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0) break;

		max = (a > b) ? a : b;
		max = (max > c) ? max : c;
		
		if (max >= a + b)
			printf("Invalid");
		else if (a == b && b == c && c == a)
			printf("Equilateral");
		else if (a == b || b == c || c == a)
			printf("Isosceles");
		else
			printf("Scalene");
		printf("\n");
	}
}
