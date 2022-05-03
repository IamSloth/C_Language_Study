/***************************************************

자기주도 C언어 프로그래밍
Page246, selftest 12-3

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 개의 정수를 입력받아 절대값이 더 큰 수를 출력하고
두 개의 실수를 입력받아 절대값이 작은 수를 출력하는 프로그램을 작성하시오.

입력 예) -50 40
		 -12.34 5.67
출력 예) -50
		 5.67

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b;
	double c, d;

	scanf("%d %d", &a, &b);
	scanf("%lf %lf", &c, &d);

	if (abs(b) > abs(a))
		a = b;

	if (fabs(c) > fabs(d))
		c = d;

	printf("%d\n", abs(a));
	printf("%lf\n", fabs(c));
}