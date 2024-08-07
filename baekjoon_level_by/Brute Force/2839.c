//2839, 설탕 배달 20240708
#include<stdio.h>
int main()
{
	int N, i, j, min, P = 0;
	scanf("%d", &N);

	//브루트 포스 (N의 최대 범위 5000) 5i + 3j = N(A라 하자)을 만족시키는 i, j가 존재하는지 확인
	for (i = 0; i <= 1000; i++)
	{
		if (5 * i > N) break;

		for (j = 0; j < 1667; j++)
		{
			if (5 * i + 3 * j > N)
				break;
			if ((5 * i + 3 * j) == N) //A를 만족시키는 i, j에 대해, i가 클수록 i+j는 작아진다.
			{
				min = i + j;
				P = 1;
				break; //i=k일 때의 j를 찾았을 경우 이후의 j 값에 대해서는 확인하지 않아도 된다.
			}
		}
	}
	if (P == 1)
		printf("%d", min);
	else //조건을 만족하는 i, j가 존재하지 않는 경우
		printf("-1");
}
/*
연립방정식 브루트포스를 활용하는 문제다. i와 j의 범위는 i=0일 때 j의 최댓값, j=0일 때 i의 최댓값으로 설정할 수 있다.
브루트 포스의 효율성을 높이기 위해 for 문 탈출 조건을 추가했다.
내부 for 문의 경우에는 A를 만족시키는 i, j를 찾았을 때, 5 * i + 3 * j가 N을 초과할 때 탈출한다.
외부 for 문의 경우에는 5 * i가 N을 초과할 때 탈출한다(이후의 모든 경우에 대해 A를 만족시키는 i, j가 존재할 수 없으므로, 더 확인하지 않아도 된다.)
*/