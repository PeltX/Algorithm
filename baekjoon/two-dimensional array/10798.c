//10798, 세로읽기 20240620
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, len, mlen=0;
	char str[5][16] = { 0 };


	for (i = 0; i < 5; i++)
	{
		scanf("%s", str[i]);
		len = strlen(str[i]);
		mlen = (len > mlen) ? len : mlen;
	}
	
	for (i = 0; i < mlen; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if(str[j][i]!=NULL)
				printf("%c", str[j][i]);
		}
	}
}