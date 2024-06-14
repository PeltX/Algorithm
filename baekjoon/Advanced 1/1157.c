//1157, 단어 공부 20240615
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[1000000], maxc;
	int i, arr[26], max=0, cnt=0;

	scanf("%s",str);
	int len = strlen(str);

	for (i = 0; i < 26; i++)
		arr[i] = 0;

	for (i = 0; i < len; i++) //알파벳 순서에 해당하는 인덱스의 배열 값 1씩 증가
	{
		if (str[i] >= 'a')
			arr[str[i] - 'a']++;
		else
			arr[str[i] - 'A']++;
	}
	
	for (i = 0; i < 26; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i]; //조건 비교를 위한 사용 횟수의 최댓값
			maxc = i + 'A'; //가장 많이 사용된 알파벳을 "대문자"로 출력해야 하므로
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (arr[i] == max)
		{
			cnt++;
			if (cnt == 2) //중복 카운터
			{
				maxc = '?';
				break;
			}
		}
	}
	printf("%c", maxc);
}

/*
가장 많이 사용된 알파벳이 여러 개인 경우 ?를 출력해야 한다. 33행의 for 문을 통해 확인할 수 있다.
그런데 24행 for 문에서 max에 arr[i]를 대입했기 때문에, 33행 for 문 안의 조건이 항상 만족된다.
즉 다른 장치를 하지 않는다면 어떠한 문자열이 대입되더라도 ?가 출력된다.
해결을 위해서는 max와 중복되는 arr[i]의 개수를 카운터로 처리하면 된다. 일반적인 경우 cnt==1이므로 정상 진행되고, 중복이 있는 경우 38행 if 문을 따라 처리된다.
if 문의 조건은 중복이 여러 개, 즉 2개 이상이기만 하면 만족하므로 cnt == 2로 충분하다.
*/