//18870, ��ǥ ���� 20240714
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

	vector<int> copy(origin); //���� ���͸� ������ ������ ������ ����

	sort(copy.begin(), copy.end()); //���� ����

	copy.erase(unique(copy.begin(), copy.end()), copy.end()); //unique�� erase�� �̿��� �ߺ� ����

	for (int i = 0; i < N; i++) //����Ž��
	{
		auto idx = lower_bound(copy.begin(), copy.end(), origin[i]); //origin[i]�� ���� copy���� ó������ �����ϴ� ��ġ Ȯ��(����� ���ĵ� �����̹Ƿ�, �� ��°�� ��ġ�ϴ����� ��ġ)
		cout << idx - copy.begin() << ' ';
	}
}

/*
unique �Լ��� ����ϸ�, "��������" �ߺ�(����, ���� �� �����ؾ��Ѵ�)�Ǵ� ������ ���� ��, �ߺ����� �ʴ� ������ �տ������� ä���. ���� ������ �������� �����Ѵ�.
�Լ��� �������� �����ϴ� ���ҵ��� ù��° �ּ� ���� ��ȯ�Ѵ�.
erase �Լ��� �̿��� unique~end���� �������ָ�, �ߺ����� ���� ���� ���� �� �ִ�.
�������� ���� -> ���� -> �ߺ����� -> ��ǥ ���(���ĵ� ������ �ε����� ������ǥ�̴�.)
lower_bound �Լ��� � �迭(����)���� Ư�� ���� ó������ �����ϴ� ��ġ�� ����Ž������ ���ϸ�, �ش� ��ġ�� �ּҰ��� ��ȯ�Ѵ�.
��ȯ�� �ּҰ����� ���� �ּҰ��� ���� �ε���(=���� ��ǥ)�� ���� �� �ִ�.
���� for ������ Ž���ϸ� �ð��ʰ��� �޴´�. 
������ �� - https://donggoolosori.github.io/2020/09/26/boj-18870/
*/