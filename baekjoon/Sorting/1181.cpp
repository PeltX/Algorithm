//1181, �ܾ� ���� 20240712
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
	if (a.len == b.len) //���̰� ���� ��� -> ���������� ����
		return (strcmp(a.str, b.str) < 0);
	else //���̰� �ٸ� ��� -> ���� ����
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
		//�ߺ� �ܾ� Ž��
		for (j = 0; j < i; j++)
		{
			if (strcmp(W[i].str, W[j].str) == 0) //�ߺ� ���ڿ� �����
			{
				W[i].cnt--;
				wcnt--;
				break;
			}
		}
		if (W[i].cnt > 0)
			strcpy(tW[wcnt].str, W[i].str); //�ߺ� ���� ��� tW.str�� ����.
		wcnt++;
	}

	for(i=0;i<wcnt;i++)
		tW[i].len = strlen(tW[i].str);

	sort(tW, tW+wcnt, compare);

	for (i = 0; i < wcnt ; i++)
		printf("%s\n", tW[i].str);
}
/* �����Լ��� ������� �ʰ� ���� �����ϸ� �Ʒ��� ����. �ٸ� �Ʒ��� �ڵ�� ���������� ����ϹǷ� �ð� ������ �ʰ��Ѵ�.
for (i = 0; i < wcnt; i++)
{
	for (j = 0; j < wcnt - 1 - i; j++)
	{
		//�ܾ� ���� ����
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
		//������ ����
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