//1009, �л� ó�� 20240803
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
1�� �ڸ����� Ȯ���ϴ� �����ε�, �ܼ��ϰ� �ŵ������� ���� �� ������ ��������.. �ִ� ������� 99^1000000�̹Ƿ� ���̽� �з��� �ʿ��ϴ�.
1�� �ڸ����� ���� ��Ģ�� �з��� ó���ϸ� �ǰڴ�.
1�� �ڸ����� 0, 1, 5, 6�� ��� b�� ���� ������� �Һ��̰�,
2, 3, 7, 8�� 4�� �ֱ�,
4, 9�� 2�� �ֱ�� ��Ģ���� ���´�.
+�Ʒ�ó�� �Ϲ�ȭ��Ű�� ����� �ִ�. �ξ� ����������.
1�� �ڸ��� = (pow(a, (b%4+4))) % 10;
*/