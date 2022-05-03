/***************************************************

자기주도 C언어 프로그래밍
Page68, Self Test 3-6

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 개의 정수를 입력받아서 다음과 같이 4가지 관계연산자의 결과를 출력하시오.

입력 예) 4 5
출력 예) 4 > 5 --- 0
		 4 < 5 --- 1
		 4 >= 5 --- 0
		 4 <= 5 --- 1
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	
	printf("\n");

	scanf("%d %d", &i, &j);

	
	printf("\n");

	printf("%d > %d --- %d\n", i, j, i > j);
	printf("%d < %d --- %d\n", i, j, i < j);
	printf("%d >= %d --- %d\n", i, j, i >= j);
	printf("%d <= %d --- %d\n", i, j, i <= j);

	printf("\n");



	return 0;
}