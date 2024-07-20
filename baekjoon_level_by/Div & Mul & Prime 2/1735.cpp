//1735, 분수 합 20240720
#include<iostream>

using namespace std;

typedef struct { //분수 구조체 선언
	int n; //numerator
	int d; //denominator
} fraction ;

int GCD(int a, int b) {
	int q, r;
	int A = a, B = b;
	int GCD;

	if (a >= b)
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
	return GCD;
}

int main()
{
	fraction a, b, r;
	int G;
	
	cin >> a.n >> a.d;
	cin >> b.n >> b.d;
	int A = a.d, B = b.d;
	G = GCD(a.d, b.d);

	//분수 통분 및 합산
	r.d = a.d / G * b.d / G * G; // ==LCM
	r.n = a.n * (r.d / a.d) + b.n * (r.d / b.d); 

	//기약분수 표기
	G = GCD(r.n, r.d);
	r.n /= G;
	r.d /= G;

	cout << r.n << ' ' << r.d;
}