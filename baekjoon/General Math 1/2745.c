//2745, 진법 변환 20240621
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char N[100];
	int i, B, bnum = 0;

	scanf("%s", N);
	scanf("%d", &B);
	int len = strlen(N);
	for (i = 0; i < len; i++)
	{
		//각 자릿수에 진법의 거듭제곱을 곱해 합산
		if (N[i] >= 'A') //11진법 이상을 사용할 때, 10진법 표기가 불가능한 숫자(A:11 ~ Z:36)
		{
			bnum += (N[i] - 55) * pow(B, len - i - 1);
		}

		if (N[i] <= '9') //10진법 표기가 가능한 숫자
		{
			bnum += (N[i] - 48) * pow(B, len - i - 1);
		}


	}
	printf("%d", bnum);
}