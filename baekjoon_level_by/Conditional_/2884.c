//2884, 알람 시계 20240603
#include<stdio.h>

int main()
{
	int H, M;

	scanf("%d %d", &H, &M);

	if (M >= 45)
		printf("%d %d", H, M - 45);

	if (M < 45)
	{
		M += 15;
		
		if (H == 0)
			H = 23;
		else H -= 1;

		printf("%d %d", H, M);
	}

}

/* 좀 더 깔끔한 코드
#include<stdio.h>
int main(void)
{
	int hr, min;
	scanf("%d %d", &hr, &min);
	if (min < 45)
	{
		min += 60;
		hr--;
		if (hr == -1)
			hr = 23;
	}
	printf("%d %d", hr, min - 45);
}
*/
