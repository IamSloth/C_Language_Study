/***************************************************

자기주도 C언어 프로그래밍
Page73, Assesment 3-2

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 정수를 입력받아서 나눈 몫과 나머지를 다음과 같은 형식으로 출력하는 프로그램을 작성하시오.

입력 예) 35 10
출력 예) 35 / 10 = 3...5
*/

#include <stdio.h>

int main()
{
	int i = 0, j = 0;

	printf("\n");

	scanf("%d %d", &i, &j);

	int quotient = i / j;
	int remainder = i % j;

	printf("\n");

	printf("%d / %d = %d...%d\n", i,j,quotient,remainder);

	printf("\n");



	return 0;
}