/***************************************************

자기주도 C언어 프로그래밍
Page70, Self Test 3-7

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 개의 정수를 입력 받아서 논리곱과 논리합의 결과를 출력하는 프로그램을 작성하시오.
입력 예) 2 0
출력 예) 0 1
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;

	printf("\n");

	scanf("%d %d", &i, &j);


	printf("\n");

	printf("%d %d\n", (i && j), (i || j) );
	
	printf("\n");



	return 0;
}