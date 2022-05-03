/***************************************************
자기주도 C언어 프로그래밍
Page249, example 12-5

This code is just for studying.
This code was written on April 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
반지름의 길이를 입력받아서 원의 넓이를 구하되
소수 이하를 버림한 경우 반올림한 경우 올림한 경우를
각각 출력하는 프로그램을 작성하시오.
원주율은 3.14로 한다.

입력 예) 원의 반지름 : 6
		 
출력 예) 원의 넓이
		 버림 : 113
		 반올림 : 113
		 올림 : 114
*/

#include <stdio.h>
#include <math.h>

double round(double val)
{
	return floor(val + 0.5);
}

int main()
{
	double radius, area, pi = 3.14;
	printf("원의 반지름 : ");
	scanf("%lf", &radius);

	area = pow(radius, 2) * pi;

	printf("원의 넓이 \n");
	printf("버림 : %.0f\n", floor(area));
	printf("반올림 : %.0f\n", round(area));
	printf("올림 : %.0f\n", ceil(area));

	return 0;
}