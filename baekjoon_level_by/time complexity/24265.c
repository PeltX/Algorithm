//24265, 알고리즘 수업 - 알고리즘의 수행 시간 4 20240701
#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld\n2", (n * n - n) / 2);
}

/* 문제에서 사용된 알고리즘 
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 1 
        for j <- i + 1 to n //i=1일 때 j=2~n ... i=n일 때 j=n이며, 시행 횟수는 n-1, n-2, ..., 1이다. 따라서 시행횟수는 1~(n-1)의 합 (n^2-n)/2로 나타난다.
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}
*/