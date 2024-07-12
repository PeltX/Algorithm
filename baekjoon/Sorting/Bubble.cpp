//Bubble Sort, 버블정렬
#include<iostream>

using namespace std;

void BubbleSort(int arr[], int N) {
	int i, j, tmp;
	for (i = 0; i < N-1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 2,4,6,8,10,1,3,5,9,7 }, brr[5] = { 1,5,4,3,2 }, i;

	BubbleSort(arr, 10);
	BubbleSort(brr, 5);

	for (i = 0; i < 10; i++)
		cout << arr[i] << '\n';
	for (i = 0; i < 5; i++)
		cout << brr[i] << '\n';

}