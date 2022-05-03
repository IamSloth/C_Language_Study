/***************************************************

자기주도 C언어 프로그래밍
Page44, Example 2-5

This code is just for studying.
This code was written on March 8, 2022.
by IamSloth

****************************************************/


#include <stdio.h>

int main()
{
	double x = 1.234;
	double y = 10.3459;

	printf("전체 7자리로 맞추고 소수 4자리까지 출력\n");
	printf("x = %7.4f \n", x);
	printf("y = %7.4f \n", y);
	printf("\n");

	printf("소수 2자리 까지 출력(반올림) \n");
	printf("x = %.2f \n", x);
	printf("y = %.2f \n", y);
	
	return 0;
}