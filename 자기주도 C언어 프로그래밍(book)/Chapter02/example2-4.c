/***************************************************

자기주도 C언어 프로그래밍
Page42, Example 2-4

This code is just for studying.
This code was written on March 8, 2022.
by IamSloth

****************************************************/


#include <stdio.h>

int main()
{
	int r = 5;
	double pi = 3.14;
	
	printf("원주 = %d * 2 * %f = %f \n", r, pi, r * 2 * pi);
	printf("넓이 = %d * %d * %f = %f \n", r, r, pi, r * r * pi);

	
	return 0;
}