//10814. ���̼� ���� 20240712
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
	if (a.age == b.age) //���̰� ���� ��� -> ���Լ���
		return a.cnt < b.cnt;
	else //���̰� �ٸ� ��� -> ���̼���
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
�Է� ���� �� ������ �ش��ϴ� ī��Ʈ�� ����ü�� �Բ� ���Խ�Ű��..?
*/