//24265, �˰��� ���� - �˰����� ���� �ð� 4 20240701
#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld\n2", (n * n - n) / 2);
}

/* �������� ���� �˰��� 
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 1 
        for j <- i + 1 to n //i=1�� �� j=2~n ... i=n�� �� j=n�̸�, ���� Ƚ���� n-1, n-2, ..., 1�̴�. ���� ����Ƚ���� 1~(n-1)�� �� (n^2-n)/2�� ��Ÿ����.
            sum <- sum + A[i] �� A[j]; # �ڵ�1
    return sum;
}
*/