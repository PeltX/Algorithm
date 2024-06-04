//25304, 영수증 20240605
#include<stdio.h>

int main()
{
	int total, t_ea, i;
	int sum=0,price, ea;
	scanf("%d", &total);
	scanf("%d", &t_ea);

	for (i = 0; i < t_ea; i++)
	{
		scanf("%d %d", &price, &ea);
		sum += (price * ea);
	}
	if (total == sum)
		printf("Yes");
	else
		printf("No");
} 
