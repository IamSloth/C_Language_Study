/***************************************************

자기주도 C언어 프로그래밍
Page245, example 12-3

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 정수를 입력받아 차를 구하고 두 실수를 입력받아 차를 구하는 프로그램을 작성하시오.

입력 예) 58 62
		 1.25 52.23
출력 예) 두 정수의 차 : 4
		 두 실수의 차 : 50.980000

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

	printf("두 정수의 차 : %d\n", abs(a - b));
	printf("두 실수의 차 : %lf\n", fabs(c - d));
}