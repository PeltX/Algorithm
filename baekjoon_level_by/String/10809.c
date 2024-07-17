//10809, 알파벳 찾기 20240612
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	int arr[26];
	char str[101], ch='a';
	scanf("%s", str);
	for (i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}

	for (i = 0; i < strlen(str); i++) //문자열 길이만큼 시행
	{
		for (j = 0; j < 26; j++) //a~z에 대해 시행
		{
			if (str[i] == ch) //단일 문자가 어떤 알파벳인지 확인 
			{
				if (arr[j] != -1) //j+1번째 알파벳이 처음 등장했는지 확인
					break;
				arr[j] = i; //j+1번째 알파벳에 해당하는 위치에 문자 위치 값 대입
			}
			ch++;
		}
		ch = 'a';
	}

	for (i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
}