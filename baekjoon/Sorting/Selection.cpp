//SelectionSort, ���� ����
#include<iostream>

using namespace std;

void Selection(int arr[], int N) {
	int i, j, min, k, tmp;
	for (i = 0; i < N; i++)
	{
		min = 100;
		for (j = i; j < N; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				k = j;
			}
		}
		//arr[k]�� arr[i]�� ��ġ �ٲٱ�
		tmp = arr[i];
		arr[i] = arr[k];
		arr[k] = tmp;

	}
}

int main()
{
	int N = 10, arr[10] = { 2,4,6,8,10,1,3,5,9,7 }, brr[5] = {1,5,4,3,2}, tmp, min, i, j, k;
	
	Selection(arr, 10);
	Selection(brr, 5);

	for (i = 0; i < 10; i++)
		cout << arr[i] << '\n';

	for (i = 0; i < 5; i++)
		cout << brr[i] << '\n';
}
