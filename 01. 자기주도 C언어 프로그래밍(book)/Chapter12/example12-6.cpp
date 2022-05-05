/***************************************************
자기주도 C언어 프로그래밍
Page251, example 12-6

This code is just for studying.
This code was written on April 17, 2022.
by IamSloth

****************************************************/


/** 문제 **
반지름의 길이를 입력받아서 원의 둘레의 길이를 구하여 출력하는 프로그램을 작성하시오.
원주율은 3.14로 하고 반올림하여 소수 둘째자리까지 출력한다

입력 예) 5.5
		 
출력 예) 34.54

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float r, ci;
	const double PI = 3.14;
	scanf("%f", &r);
	ci = r * 2 * PI;
	printf("%.2f\n", ci);
	return 0;
}