//2485, 가로수 20240722
#include<iostream>

using namespace std;

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
	int N, pos[100000], sub[100000], cnt = 0;
	cin >> N;
	sub[0] = 0;

	for (int i = 0; i < N; i++)
	{
		//가로수 좌표 입력 및 간격 계산. N개의 좌표에 대해 subtraction은 N-1개 존재한다.
		cin >> pos[i];
		if (i >= 1)
			sub[i] = pos[i] - pos[i - 1];
	}

	//N-1개의 subtraction에 대해 N-2회의 GCD 연산을 수행한다.
	int G = sub[1];
	for (int i = 1; i < N-1; i++)
		G = GCD(G, sub[i + 1]);
	
	for (int i = 1; i < N; i++) 
		cnt += (sub[i] - 1) / G; //나무가 심어진 위치는 포함하지 않는다. 

	cout << cnt;
}
/*
N개의 수에 대해 최대공약수를 구하는 문제이다.
새롭게 심어지는 나무의 좌표는 굳이 구하지 않아도 되며, 인접한 나무 사이에 몇 개의 나무가 새롭게 심어지면 되는지만 파악하면 된다.
사이에 위치한 나무의 개수 / GCD = 새롭게 심어질 나무의 개수이다.
*/