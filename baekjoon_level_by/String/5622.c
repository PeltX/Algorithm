//5622, 다이얼 20240613
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int min = 0;
	char word[16];
	scanf("%s", word);
	int len = strlen(word);
	for (int i = 0; i < len; i++)
	{
		if ('A' <= word[i] && word[i] <= 'C')
			min += 3;
		if ('D' <= word[i] && word[i] <= 'F')
			min += 4;
		if ('G' <= word[i] && word[i] <= 'I')
			min += 5;
		if ('J' <= word[i] && word[i] <= 'L')
			min += 6;
		if ('M' <= word[i] && word[i] <= 'O')
			min += 7;
		if ('P' <= word[i] && word[i] <= 'S')
			min += 8;
		if ('T' <= word[i] && word[i] <= 'V')
			min += 9;
		if ('W' <= word[i] && word[i] <= 'Z')
			min += 10;
	}
	printf("%d", min);
}

// 더 효율적인 방법이 있을까?
