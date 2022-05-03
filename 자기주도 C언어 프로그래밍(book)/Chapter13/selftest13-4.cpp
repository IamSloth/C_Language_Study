/***************************************************

자기주도 C언어 프로그래밍
Page273, selftest 13-4

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
10 이하의 자연수 N을 입력받아 주사위를 N번 던져서 나올 수 있는 모든 경우를 출력하되
중복되는 경우에는 앞에서부터 작은 순으로 1개만 출력하는 프로그램을 작성하시오

입력 예) 3

출력 예)
1 1 1
1 1 2
...
1 1 6
1 2 2
1 2 3
...
5 6 6
6 6 6

*/

#include <stdio.h>
int N, arr[30];

void dice(int n)
{
	if (n > N)
	{
		for (int i = 0; i < N; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i < 6; i++)
	{
		arr[n] = i;
		dice(n + 1);

	}
}

int main()
{
	scanf("%d", &N);
	dice(1);
}
