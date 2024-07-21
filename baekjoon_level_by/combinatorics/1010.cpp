//1010, 다리 놓기 20240721
#include<iostream>

using namespace std;

//nCk
int combination(int N, int K) {
	K = (N - K < K) ? N - K : K;
	long long A = 1, B = 1;

	for (int i = N; i > N - K; i--)
		A *= i;
	
	for (int i = K; i >= 1; i--)
		B *= i;
	
	return A / B;
}

int main()
{
	int T, N, M, com;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N >> M;
		cout << combination(M, N) << '\n';
	}
}
/*
조합에 관한 간단한 문제. 자료형과, M_C_N을 출력해야한다는 점만 주의하자.
*/