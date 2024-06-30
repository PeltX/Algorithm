//24262, 알고리즘 수업 - 알고리즘의 수행 시간 1 20240630
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("1\n0"); //수행횟수, 최고차항 차수 --> 입력 값과 관계없이 일정.
}

/* 문제에서 주어진 알고리즘
MenOfPassion(A[], n) {
    i = ⌊n / 2⌋;
    return A[i]; # 코드1
}
*/