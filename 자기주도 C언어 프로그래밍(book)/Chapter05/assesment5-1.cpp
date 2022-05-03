/***************************************************

자기주도 C언어 프로그래밍
Page108, Assesment 5-1

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차를 출력하는 프로그램을 작성하시오.

입력 예) 50 85
출력 예) 35
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i, j;
	i = 0;
	j = 0;
	
	scanf("%d %d", &i, &j);

	printf("\n");

	int gap = 0;

	if (i > j)
	{
		gap = i - j;
		printf("%d\n", gap);
	}

	else
	{
		gap = j - i;
		printf("%d\n", gap);
	}

	return 0;
}