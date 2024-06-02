//2525, 오븐 시계 20240603
#include<stdio.h>

int main()
{
	int H, M, C, ch ,cm;

	scanf("%d %d", &H, &M);
	scanf("%d", &C);

	//C를 시간과 분으로 구분
	ch = C / 60;
	cm = C - ch * 60;

	//시간 합치기
	H += ch;
	M += cm;

	//60분을 넘기는 경우, 24시간을 넘기는 경우에 대한 조건
	if (M >= 60)
	{
		M -= 60;
		H++;
	}
	if (H >= 24)
	{
		H -= 24;
	}
	printf("%d %d", H, M);

}
