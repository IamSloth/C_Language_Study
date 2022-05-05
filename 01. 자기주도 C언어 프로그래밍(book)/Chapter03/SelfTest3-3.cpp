/***************************************************

자기주도 C언어 프로그래밍
Page62, Self Test 3-3

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
한 개의 정수를 입력 받아서 후치증가 연산자를 사용하여 출력한 후,
전치 증가 연산자를 사용하여 출력하는 프로그램을 작성하시오.

입력 예) 5
출력 예) 5
		 7
*/

#include <stdio.h>

int main()
{
	int i = 0;
	
	printf("\n");

	scanf("%d", &i);

	
	printf("\n");

	printf("%d\n", i++);
	printf("%d\n", ++i);

	printf("\n");



	return 0;
}