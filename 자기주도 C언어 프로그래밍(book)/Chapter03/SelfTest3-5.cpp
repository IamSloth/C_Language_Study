/***************************************************

자기주도 C언어 프로그래밍
Page66, Self Test 3-5

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 개의 정수를 입력받아서 두 정수의 값이 같으면 1, 아니면 0을 출력하고
두 번째 줄에는 같지 않으면 1, 아니면 0 을 출력하는 프로그램을 작성하시오.

입력 예) 5 5
출력 예) 1
		 0
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	
	printf("\n");

	scanf("%d %d", &i, &j);

	
	printf("\n");

	printf("%d\n", i == j);
	printf("%d\n", i != j);

	printf("\n");



	return 0;
}