//2675, 문자열 반복 20240613
#include<stdio.h>
int main()
{
	int T, R, i, j, cnt;
	char str[20], pstr[160];
	scanf("%d", & T);
	
	for (i = 0; i < T; i++)
	{
		cnt = 0;
		scanf("%d", &R);
		scanf("%s", str);

		while (str[cnt] != NULL)
		{
			for (j = 0; j < R; j++)
			{
				pstr[j+R*cnt] = str[cnt];  // 반복횟수 * cnt를 더해줌으로써 문자를 대입할 인덱스로 이동
			}
			cnt++;
		}
		pstr[R * cnt] = NULL; // pstr 문자열의 끝에 NULL 문자 추가 (문자열 출력 시 NULL 문자 이전까지 출력하므로)
		printf("%s\n",pstr);
	}
}

/* 문제의 의도와는 살짝 다르지만, 아래와 같은 방법을 통해서도 같은 결과를 출력할 수 있다.
while (str[cnt] != NULL)
		{
			for (j = 0; j < R; j++)
			{
				printf("%c", str[cnt]);
			}
			cnt++;
		}
		printf("\n");
*/