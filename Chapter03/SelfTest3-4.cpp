/***************************************************

자기주도 C언어 프로그래밍
Page64, Self Test 3-4

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 개의 정수를 입력 받아 각각 후치 증가 연산자와 전치 감소 연산자를 사용하여
두 수의 곱을 새로운 변수에 저장한 후 각가의 값을 출력하는 프로그램을 작성하시오.

입력 예) 10 20
출력 예) 11 19 190
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	
	printf("\n");

	scanf("%d %d", &i, &j);

	int k = (i++) * (--j);
	
	printf("\n");

	printf("%d %d %d\n", i,j,k);

	printf("\n");



	return 0;
}