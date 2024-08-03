//1009, 분산 처리 20240803
#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int a, b;
	int mod_b;

	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;

		if (a % 10 == 0)
			cout << 10;
		else if (a % 10 == 1)
			cout << 1;
		else if (a % 10 == 5)
			cout << 5;
		else if (a % 10 == 6)
			cout << 6;
		else if (a % 10 == 2)
		{
			mod_b = b % 4;
			if (mod_b == 1)
				cout << 2;
			else if (mod_b == 2)
				cout << 4;
			else if (mod_b == 3)
				cout << 8;
			else
				cout << 6;
		}
		else if (a % 10 == 3)
		{
			mod_b = b % 4;
			if (mod_b == 1)
				cout << 3;
			else if (mod_b == 2)
				cout << 9;
			else if (mod_b == 3)
				cout << 7;
			else
				cout << 1;
		}
		else if (a % 10 == 4)
		{
			mod_b = b % 2;
			if (mod_b == 1)
				cout << 4;
			else
				cout << 6;
		}
		else if (a % 10 == 7)
		{
			mod_b = b % 4;

			if (mod_b == 1)
				cout << 7;
			else if (mod_b == 2)
				cout << 9;
			else if (mod_b == 3)
				cout << 3;
			else
				cout << 1;
		}
		else if (a % 10 == 8)
		{
			mod_b = b % 4;

			if (mod_b == 1)
				cout << 8;
			else if (mod_b == 2)
				cout << 4;
			else if (mod_b == 3)
				cout << 2;
			else
				cout << 6;
		}
		else if (a % 10 == 9)
		{
			mod_b = b % 2;

			if (mod_b == 1)
				cout << 9;
			else
				cout << 1;
		}
		cout << '\n';
	}
}
/*
1의 자릿수를 확인하는 문제인데, 단순하게 거듭제곱을 구할 수 있으면 좋겠지만.. 최대 결과값이 99^1000000이므로 케이스 분류가 필요하다.
1의 자릿수에 따른 규칙을 분류해 처리하면 되겠다.
1의 자릿수가 0, 1, 5, 6인 경우 b의 값에 상관없이 불변이고,
2, 3, 7, 8은 4번 주기,
4, 9는 2번 주기로 규칙성을 갖는다.
+아래처럼 일반화시키는 방법도 있다. 훨씬 간결해진다.
1의 자릿수 = (pow(a, (b%4+4))) % 10;
*/