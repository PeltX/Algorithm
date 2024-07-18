//13241, 최소공배수 20240718
#include<iostream>

using namespace std;

int main()
{
	int q, r;
	long long A, B, GCD, LCM;

	cin >> A >> B;
	long long A_o = A, B_o = B;

	//GCD by Euclidean Algorithm
	if (A >= B)
	{
		while (1)
		{
			q = A / B;
			r = A - B * q;
			if (r == 0) break;
			A = B;
			B = r;
		}
		GCD = B;
	}
	else
	{
		while (1)
		{
			q = B / A;
			r = B - A * q;
			if (r == 0) break;
			B = A;
			A = r;
		}
		GCD = A;
	}

	//LCM
	A_o /= GCD;
	B_o /= GCD;
	LCM = GCD * A_o * B_o;

	cout << LCM << '\n';
}