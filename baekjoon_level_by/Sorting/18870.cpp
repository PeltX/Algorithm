//18870, 좌표 압축 20240714
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> origin(N);

	for (int i = 0; i < N; i++)
		cin >> origin[i];

	vector<int> copy(origin); //원본 벡터를 정렬한 값으로 구성할 벡터

	sort(copy.begin(), copy.end()); //정렬 시행

	copy.erase(unique(copy.begin(), copy.end()), copy.end()); //unique와 erase를 이용한 중복 제거

	for (int i = 0; i < N; i++) //이진탐색
	{
		auto idx = lower_bound(copy.begin(), copy.end(), origin[i]); //origin[i]의 값이 copy에서 처음으로 등장하는 위치 확인(현재는 정렬된 벡터이므로, 몇 번째에 위치하는지와 동치)
		cout << idx - copy.begin() << ' ';
	}
}

/*
unique 함수를 사용하면, "연속으로" 중복(따라서, 정렬 후 제거해야한다)되는 값들을 제거 후, 중복되지 않는 값들을 앞에서부터 채운다. 남은 공간은 원본값을 유지한다.
함수는 원본값을 유지하는 원소들의 첫번째 주소 값을 반환한다.
erase 함수를 이용해 unique~end까지 제거해주면, 중복되지 않은 값을 얻을 수 있다.
원본벡터 복사 -> 정렬 -> 중복제거 -> 좌표 계산(정렬된 벡터의 인덱스가 압축좌표이다.)
lower_bound 함수는 어떤 배열(벡터)에서 특정 값이 처음으로 등장하는 위치를 이진탐색으로 구하며, 해당 위치의 주소값을 반환한다.
반환된 주소값에서 시작 주소값을 빼면 인덱스(=압축 좌표)를 구할 수 있다.
이중 for 문으로 탐색하면 시간초과를 받는다. 
참고한 글 - https://donggoolosori.github.io/2020/09/26/boj-18870/
*/