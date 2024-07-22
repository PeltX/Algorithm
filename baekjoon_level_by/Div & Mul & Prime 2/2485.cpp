//2485, ���μ� 20240722
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
		//���μ� ��ǥ �Է� �� ���� ���. N���� ��ǥ�� ���� subtraction�� N-1�� �����Ѵ�.
		cin >> pos[i];
		if (i >= 1)
			sub[i] = pos[i] - pos[i - 1];
	}

	//N-1���� subtraction�� ���� N-2ȸ�� GCD ������ �����Ѵ�.
	int G = sub[1];
	for (int i = 1; i < N-1; i++)
		G = GCD(G, sub[i + 1]);
	
	for (int i = 1; i < N; i++) 
		cnt += (sub[i] - 1) / G; //������ �ɾ��� ��ġ�� �������� �ʴ´�. 

	cout << cnt;
}
/*
N���� ���� ���� �ִ������� ���ϴ� �����̴�.
���Ӱ� �ɾ����� ������ ��ǥ�� ���� ������ �ʾƵ� �Ǹ�, ������ ���� ���̿� �� ���� ������ ���Ӱ� �ɾ����� �Ǵ����� �ľ��ϸ� �ȴ�.
���̿� ��ġ�� ������ ���� / GCD = ���Ӱ� �ɾ��� ������ �����̴�.
*/