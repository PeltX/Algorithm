//1316, 그룹 단어 체커 20240617
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, group=0, gcnt, i, j, k, len, tmp[26];
	char word[101];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		//문자열 입력 및 길이 세팅, gcnt 초기화
		scanf("%s", word); 
		len = strlen(word);
		gcnt = 0; //word의 길이와 동일할 경우 그룹문자

		//저장소 배열의 값 초기화
		for (j = 0; j < 26; j++)
			tmp[j] = 0;
		
		for (j = 0; j < len; j++)
		{
			//첫 번째 문자에 한해
			if (j == 0)
			{
				tmp[word[j] - 'a']++;
				gcnt++;
			}
			else //두 번째 문자부터
			{
				//앞 문자와 동일한 경우
				if (word[j] == word[j - 1])
					gcnt++;
				

				//앞 문자와 동일하지 않은 경우
				if (word[j] != word[j - 1])
				{
					if (tmp[word[j]-'a'] > 0) //저장소에 있는 문자와 겹치는지 판단. 이 경우 그룹문자가 아니다.
					{
						gcnt--;
						break;
					}
					tmp[word[j] - 'a']++; //저장소에 값 추가
					gcnt++;
				}
			}
		}
		if (gcnt == len)
			group++;
	}
	printf("%d", group);
}