//1075, ³ª´©±â 20240804
#include<iostream>

using namespace std;

int main()
{
	int N, F;
	cin >> N >> F;

	N = N / 100 * 100;
	
	for (int i = 0; i < 100; i++)
	{
		if (N % F == 0)
		{
			if (i < 10)
				printf("0%d", i);
			else
				cout << i;
			break;
		}
		N++;
	}
}