//24266, �˰��� ���� - �˰����� ���� �ð� 5 20240702
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	printf("%lld\n3", (long long)n * n * n);
}
//long long �ڷ������� n�� �����ص� ������, int �ڷ������� ���� �� ����ȯ�� ����ؼ� Ǯ� �����ϴ�.
/* �������� �־��� �˰���
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            for k <- 1 to n
                sum <- sum + A[i] �� A[j] �� A[k]; # �ڵ�1
    return sum;
}
*/