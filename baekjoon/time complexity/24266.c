//24266, 알고리즘 수업 - 알고리즘의 수행 시간 5 20240702
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	printf("%lld\n3", (long long)n * n * n);
}
//long long 자료형으로 n을 선언해도 되지만, int 자료형으로 선언 후 형변환을 사용해서 풀어도 가능하다.
/* 문제에서 주어진 알고리즘
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            for k <- 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
}
*/