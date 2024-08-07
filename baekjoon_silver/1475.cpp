//1475, 방 번호 20240807
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int arr[10] = { 0 }, cnt = 0;
	string room;
	cin >> room;
	

	for (int i = 0; i < room.length(); i++) //인덱스 기반 누적
		arr[room[i] - '0']++;		

	int max = arr[0];

	for (int i = 1; i < 10; i++)
		max = (max > arr[i]) ? max : arr[i];

	for (int i = 0; i < 10; i++) //max 중복 카운트 확인
	{
		if (max == arr[i])
			cnt++;
	}

	if ((max == arr[6] || max == arr[9]) && cnt == 1)
	{
		max = arr[6] + arr[9];
		int mod = max % 2;
		max /= 2;
		if (mod > 0)
			max++;
	}
	cout << max;
}
/*
6과 9를 뒤집어서 사용할 수 있음, 즉 66 또는 99를 하나의 세트로 표현할 수 있다는 것이 문제의 핵심이다.
6과 9가 최댓값인 경우에 유의하면, 그 외의 경우는 어렵지 않게 해결할 수 있다.
다만, 6이나 9가 아닌 수 중 중복되는 최댓값이 존재하는 경우 그 수에 초점을 맞춰야 하겠다.
*/