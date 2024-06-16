//2941, 크로아티아 알파벳 20240616
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[101];
	int i, j, len, cnt=0;

	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == 'c')
		{
			if (str[i + 1] == '=' || str[i + 1] == '-')
				cnt--;
		}
		if (str[i] == 'd')
		{
			if (str[i + 1] == '-')
				cnt--;
			if (str[i + 1] == 'z' && str[i + 2] == '=')
				cnt-=2;
		}
		if (str[i] == 'n' || str[i] == 'l')
		{
			if (str[i + 1] == 'j')
				cnt--;
		}
		if (str[i] == 's' || (str[i-1] != 'd' && str[i] == 'z'))
		{
			if (str[i + 1] == '=')
				cnt--;
		}
		cnt++;
	}
	printf("%d", cnt);
}