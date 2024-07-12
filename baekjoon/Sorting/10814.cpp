//10814. 나이순 정렬 20240712
#include<iostream>
#include<algorithm>

using namespace std;

typedef struct {
	int age;
	char name[101];
	int cnt;
} profile ;

profile arr[100000];

bool compare(profile a, profile b) {
	if (a.age == b.age) //나이가 같은 경우 -> 가입순서
		return a.cnt < b.cnt;
	else //나이가 다른 경우 -> 나이순서
		return a.age < b.age;
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].age >> arr[i].name;
		arr[i].cnt = i + 1;
	}

	sort(arr, arr + N, compare);
	
	for (int i = 0; i < N; i++)
		printf("%d %s\n", arr[i].age, arr[i].name);
}
/*
입력 받을 때 순서에 해당하는 카운트를 구조체에 함께 포함시키면..?
*/