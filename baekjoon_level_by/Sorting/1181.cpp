//1181, 단어 정렬 20240712
#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

typedef struct {
	char str[51];
	int len;
	int cnt;
} word;

word W[20000];
word tW[20000];

bool compare(word a, word b) {
	if (a.len == b.len) //길이가 같은 경우 -> 사전식으로 정렬
		return (strcmp(a.str, b.str) < 0);
	else //길이가 다른 경우 -> 길이 정렬
		return a.len < b.len; 
}

int main()
{
	int N, i, j, wcnt=0;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%s", W[i].str);


	for (i = 0; i < N; i++)
	{
		W[i].cnt = 1;
		//중복 단어 탐색
		for (j = 0; j < i; j++)
		{
			if (strcmp(W[i].str, W[j].str) == 0) //중복 문자열 존재시
			{
				W[i].cnt--;
				wcnt--;
				break;
			}
		}
		if (W[i].cnt > 0)
			strcpy(tW[wcnt].str, W[i].str); //중복 없을 경우 tW.str에 복사.
		wcnt++;
	}

	for(i=0;i<wcnt;i++)
		tW[i].len = strlen(tW[i].str);

	sort(tW, tW+wcnt, compare);

	for (i = 0; i < wcnt ; i++)
		printf("%s\n", tW[i].str);
}
/* 내장함수를 사용하지 않고 직접 구현하면 아래와 같다. 다만 아래의 코드는 버블정렬을 사용하므로 시간 제한을 초과한다.
for (i = 0; i < wcnt; i++)
{
	for (j = 0; j < wcnt - 1 - i; j++)
	{
		//단어 길이 정렬
		if (tW[j].len > tW[j + 1].len)
		{
			tmp.len = tW[j].len;
			tW[j].len = tW[j + 1].len;
			tW[j + 1].len = tmp.len;

			strcpy(tmp.str, tW[j].str);
			strcpy(tW[j].str, tW[j + 1].str);
			strcpy(tW[j + 1].str, tmp.str);
		}
	}
}

for (i = 0; i < wcnt; i++)
{
	for (j = 0; j < wcnt - 1 - i; j++)
	{
		//사전순 정렬
		if (tW[j].len == tW[j + 1].len)
		{
			if (strcmp(tW[j].str, tW[j+1].str) > 0)
			{
				strcpy(tmp.str, tW[j].str);
				strcpy(tW[j].str, tW[j + 1].str);
				strcpy(tW[j + 1].str, tmp.str);
			}
		}
	}
}
*/