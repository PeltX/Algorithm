//25206, 너의 평점은 20240618
#include<stdio.h>
int main()
{
	char obj[50], grade[3];
	double sscore=0, credit, scredit=0;
	int i, j;

	for (i = 0; i < 20; i++)
	{
		scanf("%s %lf %s", obj, &credit, grade);
		
		if (grade[0] != 'P') //P인 경우는 계산에서 제외. 학점 누적
			scredit += credit;

		//학점 * 과목평점 계산 및 누적
		if (grade[0] == 'A')
		{
			if (grade[1] == '+') //4.5
				sscore += credit * 4.5;
			else if (grade[1] == '0')
				sscore += credit * 4.0; //4.0
		}
		if (grade[0] == 'B')
		{
			if (grade[1] == '+') //3.5
				sscore += credit * 3.5;
			else if (grade[1] == '0')
				sscore += credit * 3.0; //3.0
		}
		if (grade[0] == 'C')
		{
			if (grade[1] == '+') //2.5
				sscore += credit * 2.5;
			else if (grade[1] == '0')
				sscore += credit * 2.0; //2.0
		}
		if (grade[0] == 'D')
		{
			if (grade[1] == '+') //1.5
				sscore += credit * 1.5;
			else if (grade[1] == '0')
				sscore += credit * 1.0; //1.0
		}
		//F인 경우는 작성할 필요 없다. 과목평점이 0이므로 학점 총합에만 반영하면 된다.
		
	}
	printf("%lf", sscore / scredit);
}