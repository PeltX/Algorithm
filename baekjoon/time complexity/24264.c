//24264, �˰��� ���� - �˰����� ���� �ð� 3 20240701
#include<stdio.h>
int main()
{
    long long n; //n�� �ִ��� 500,000�̹Ƿ� n^2�� �ִ��� int �� ���� ������ �ʰ��Ѵ�.
    scanf("%lld", &n);
    printf("%lld\n2", n * n);
}

/* �������� �־��� �˰���
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n (* n)
        for j <- 1 to n (* n) => ���� Ƚ���� n^2�̴�.
            sum <- sum + A[i] �� A[j]; # �ڵ�1
    return sum;
}
*/