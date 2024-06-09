//10811, 바구니 뒤집기 20240609
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, M, i, j, k, a, b, temp;
	int* arr;
	

	scanf("%d %d", &N, &M);
	arr = (int*)malloc(sizeof(int) * N);
	
	for (i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}

	for (i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		for (j = 0; j < (b - a + 1) / 2; j++) // 역순으로 만드는 바구니의 개수를 n이라 할때, 모든 n에 대하여 for 문을 n/2(소수점 버림) 번 시행하면 된다. (홀수의 경우 가운데 수는 역순으로 만들어도 변하지 않으므로)
		{
			temp = arr[a+j-1];
			arr[a + j - 1] = arr[b - j - 1];
			arr[b - j - 1] = temp;
		}
		
	}

	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
}


/* 
-아래와 같은 방법으로도 가능하다. 
 *iarr;
 for (i = 0; i < N; i++)
	{
		iarr[i] = i + 1; 뒤집지 않는 바구니가 있는 경우도 있으므로 초기 설정은 arr와 똑같다.
	}
iarr = (int*)malloc(sizeof(int) * N); <기본 설정

for (j = a; j <= b; j++)
		{
			iarr[j - 1] = arr[a+b - j-1]; iarr에 arr 값을 역순 인덱스대로 대입
		}
		for (k = 0; k < N; k++)
			arr[k] = iarr[k];	위에서 계산한 iarr 배열을 arr 배열에 복사
*/

/* n/2 번만 시행해도 되는 이유
1 2 3 4를 역순으로 바꾸면,
1 과 4의 위치를, 2와 3의 위치를 바꾸면 된다. (2회)
1 2 3 4 5를 역순으로 바꾸면,
1과 5의 위치를, 2와 4의 위치를 바꾸면 된다. (2회)
즉, 홇수/짝수에 관계없이 맨 앞<->맨 끝, 앞에서 두번째<->뒤에서 두번째 ... 앞에서 N/2번째<->뒤에서 N/2번째 위치만 바꾸면 된다.
임시 저장 변수인 temp 하나로 두 숫자의 위치를 간단히 바꿀 수 있다는 것을 알아두자. 
*/