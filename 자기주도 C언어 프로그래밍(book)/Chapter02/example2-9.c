/***************************************************

자기주도 C언어 프로그래밍
Page51, Example 2-9

This code is just for studying.
This code was written on March 8, 2022.
by IamSloth

****************************************************/


#include <stdio.h>

int main()
{
	double x, y;
	printf("두 개의 실수를 입력하시오. \n");
	scanf_s("%lf %lf", &x, &y);
	printf("x = %.2f \n", x);
	printf("y = %.2f \n", y);

	return 0;
}