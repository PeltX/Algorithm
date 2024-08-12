//2440, º° Âï±â-3 20240812
//B4

#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i; j++)
			cout << "*";
		cout << "\n";
	}
}