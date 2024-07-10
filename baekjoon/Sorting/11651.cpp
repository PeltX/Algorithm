//11651, 좌표 정렬하기 2 202407111
#include<iostream>
#include<algorithm>

using namespace std;

struct crd {
	int x;
	int y;
};

bool compare(crd a, crd b) {
	if (a.y == b.y) //y좌표가 같은 경우 -> x값 정렬
		return a.x < b.x;
	else //y좌표가 다른 경우 -> y값 정렬
		return a.y < b.y;
}
int main()
{
	int i, N;
	scanf("%d", &N);

	crd arr[100001];

	for (i = 0; i < N; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);

	sort(arr, arr + N, compare);

	for (i = 0; i < N; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
}
