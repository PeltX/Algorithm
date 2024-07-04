//2231, 분해합 20240705
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, i, sum=0, k, con;

	scanf("%d", &N); //생성자를 구할 자연수

	//브루트 포스
	for(i=1 ; i<1000000; i++)
	{
		k = i; //생성자 인덱스

		//i의 분해합 구하기
		sum += i;
		while (k != 0)
		{
			sum += k % 10;
			k /= 10;
		}

		//분해합이 N과 같은 경우 생성자 저장 및 반복문 탈출. 이때의 생성자는 자동으로 가장 작은 생성자이다.
		if (sum == N)
		{
			con = i;
			break;
		}
		sum = 0;
	}

	if (con != 0) //생성자가 존재하는 경우
		printf("%d", con);
	else //생성자가 존재하지 않는 경우
		printf("0");
}
/* 분해합 구현은 아래와 같이 문자열을 이용해 구할 수 있다.
for (i = len; i > 0; i--)
	{
		printf("%d", M[cnt] - '0');
		sum += (M[cnt] - '0') * pow(10, i - 1);
		sum += M[cnt] - '0';
		cnt++;
	}
*/