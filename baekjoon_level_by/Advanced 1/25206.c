//25206, ���� ������ 20240618
#include<stdio.h>
int main()
{
	char obj[50], grade[3];
	double sscore=0, credit, scredit=0;
	int i, j;

	for (i = 0; i < 20; i++)
	{
		scanf("%s %lf %s", obj, &credit, grade);
		
		if (grade[0] != 'P') //P�� ���� ��꿡�� ����. ���� ����
			scredit += credit;

		//���� * �������� ��� �� ����
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
		//F�� ���� �ۼ��� �ʿ� ����. ���������� 0�̹Ƿ� ���� ���տ��� �ݿ��ϸ� �ȴ�.
		
	}
	printf("%lf", sscore / scredit);
}