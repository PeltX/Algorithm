// [10951] A+B - 4. EOF(End Of File). scanf EOF => Return -1
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != -1)
	{
		printf("%d\n", a + b);
	}
}