//24263, 알고리즘 수업 - 알고리즘의 수행 시간 2 20240630
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", n); //코드 수행횟수
	printf("1"); //최고차항 차수
}

/* 문제에서 주어진 알고리즘
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n //for 문을 n 값만큼 수행한다.
        sum <- sum + A[i]; # 코드1
    return sum;
}
*/