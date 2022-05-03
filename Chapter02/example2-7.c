/***************************************************

자기주도 C언어 프로그래밍
Page47, Example 2-7

This code is just for studying.
This code was written on March 8, 2022.
by IamSloth

****************************************************/


#include <stdio.h>

int main()
{
	int a, b;

	printf("두 수를 입력하시오. ");
	scanf_s("%d %d", &a, &b);
	printf("%d + %d = %d \n", a, b, a + b);
	printf("%d * %d = %d \n", a, b, a * b);

	return 0;
}