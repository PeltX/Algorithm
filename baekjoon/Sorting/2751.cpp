//2751, 수 정렬하기 2 20240711
#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000000];

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	for (int i = 0; i < N; i++)
		cout << arr[i] << '\n';
}
