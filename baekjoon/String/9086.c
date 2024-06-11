//9086 ¹®ÀÚ¿­, 20240611
#include<stdio.h>
int main()
{
	int T, i, j;
	char str[1000];
	scanf("%d", &T);
	for (i = 1; i <= T; i++)
	{
		scanf("%s", str);
		printf("%c", str[0]);
		for (j = 0; j < 1000; j++)
		{
			if (str[j] == NULL)
			{
				printf("%c\n", str[j - 1]);
				break;
			}
		}
	}
}