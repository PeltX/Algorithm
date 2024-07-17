//Binary Search, ÀÌÁø Å½»ö
#include<iostream>
#include<random>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 100);

	vector<int> vec(50);
	int i = 0;
	int dup;

	while (i != 50)
	{
		dup = 1;
		vec[i] = dis(gen);
		for (int j = 0; j < i; j++)
		{
			if (vec[j] == vec[i])
			{
				dup = 0;
				break;
			}
		}
		if(dup==1)
			i++;
	}

	sort(vec.begin(), vec.end());

	int first = 0, last = 50;
	int mid = (first + last) / 2;

	int val, vcnt=0;
	
	while (vcnt != 1) {
		cin >> val;
		for (i = 0; i < 50; i++)
		{
			if (vec[i] == val) {
				vcnt = 1;
				break;
			}
		}
		if (vcnt == 0)
			cout << "Input Value is not exist in vector. Input Other Value" << '\n';
	}
	

	for (i = 0; i < 50; i++)
		cout << vec[i] << ' ';
	cout << '\n';

	while (1) { //Recursive
		if (val == vec[mid])
		{
			cout << mid+1;
			break;
		}
		else if (val < vec[mid]) //When Value is smaller than vec[mid] -> Value exists in Leftside
		{
			last = mid - 1;
			mid = (first + last) / 2;
		}
		else //Value exists in Rightside
		{
			first = mid + 1;
			mid = (first + last) / 2;
		}
	}
	
	
	
	



}
