//11005, 진법 변환 2 20240621
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, B, i, mod, cnt = 0;
	char bch[100], tmp;

	scanf("%d %d", &N, &B);

	while (1)
	{
		mod = N % B;
		if (mod < 10)
		{
			bch[cnt] = mod + 48;
			cnt++;
		}
		if (mod >= 10)
		{
			bch[cnt] = mod + 55;
			cnt++;
		}
		N /= B;
		if (N == 0) //더 이상 나눌 수 없을 때
			break;
	}

	bch[cnt] = NULL; //문자열의 끝

	for (i = 0; i < (cnt / 2); i++) //(실제 연산과 비교했을 때) 수의 대입이 역방향이므로 SWAP
	{
		tmp = bch[i];
		bch[i] = bch[cnt - i - 1];
		bch[cnt - i - 1] = tmp;
	}
	printf("%s", bch);
}

/* 마지막 몫에 해당하는 부분을 따로 처리할 경우, 위쪽 코드는 마지막 몫에 해당하는 부분을 한 번 더 mod 연산 해 나머지로 처리한다.
	if (N < B)
		{
			if (N < 10)
			{
				bch[cnt] = N + 48;
				cnt++;
			}
			if (N >= 10)
			{
				bch[cnt] = N + 55;
				cnt++;
			}
			break;
		}
*/