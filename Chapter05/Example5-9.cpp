/***************************************************

자기주도 C언어 프로그래밍
Page106, Example 5-9

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 개의 정수를 입력받아 조건연산자를 이용하여 두 수 중 큰 수를 출력하는 프로그램을 작성하시오.

입력 예) 89 100
출력 예) 100
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i,j = 0;
	int biggerNumber = 0;
		
	scanf("%d %d", &i, &j);

	printf("\n");

	biggerNumber = (i > j) ? i : j;

	printf("%d\n", biggerNumber);

	return 0;
}