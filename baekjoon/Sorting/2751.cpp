//2751, 수 정렬하기 2 20240711
#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000000];

int main()
{
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + N);

	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
}