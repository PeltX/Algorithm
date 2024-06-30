//24264, 알고리즘 수업 - 알고리즘의 수행 시간 3 20240701
#include<stdio.h>
int main()
{
    long long n; //n의 최댓값이 500,000이므로 n^2의 최댓값이 int 형 정수 범위를 초과한다.
    scanf("%lld", &n);
    printf("%lld\n2", n * n);
}

/* 문제에서 주어진 알고리즘
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n (* n)
        for j <- 1 to n (* n) => 수행 횟수는 n^2이다.
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}
*/