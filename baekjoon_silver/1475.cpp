//1475, �� ��ȣ 20240807
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int arr[10] = { 0 }, cnt = 0;
	string room;
	cin >> room;
	

	for (int i = 0; i < room.length(); i++) //�ε��� ��� ����
		arr[room[i] - '0']++;		

	int max = arr[0];

	for (int i = 1; i < 10; i++)
		max = (max > arr[i]) ? max : arr[i];

	for (int i = 0; i < 10; i++) //max �ߺ� ī��Ʈ Ȯ��
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
6�� 9�� ����� ����� �� ����, �� 66 �Ǵ� 99�� �ϳ��� ��Ʈ�� ǥ���� �� �ִٴ� ���� ������ �ٽ��̴�.
6�� 9�� �ִ��� ��쿡 �����ϸ�, �� ���� ���� ����� �ʰ� �ذ��� �� �ִ�.
�ٸ�, 6�̳� 9�� �ƴ� �� �� �ߺ��Ǵ� �ִ��� �����ϴ� ��� �� ���� ������ ����� �ϰڴ�.
*/