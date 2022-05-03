/***************************************************

자기주도 C언어 프로그래밍
Page53, Assessment 2-3

This code is just for studying.
This code was written on March 10, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수형 변수 한 개를 선언하여 50을 대입하고
실수형 변수 한 개를 선언하여 100.12를 대입한 후
다음과 같이 출력하는 프로그램을 작성하시오 (결과값은 소수점 이하에서 반올림)

출력 예) 100.12 * 50 = 5006
*/

#include <stdio.h>

int main()
{
	int i = 50;
	float f = 100.12;


	printf("\n");
	printf("%.2f * %d = %.0f\n", f, i, i*f);

	return 0;
}