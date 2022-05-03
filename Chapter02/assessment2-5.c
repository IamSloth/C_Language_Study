/***************************************************

자기주도 C언어 프로그래밍
Page53, Assessment 2-5

This code is just for studying.
This code was written on March 10, 2022.
by IamSloth

****************************************************/

/** 문제 **
실수의 yard(야드)를 입력받아 cm(센티미터)로 환산한 값을 반올림하여
소수 첫째자리까지 출력하는 프로그램을 작성하시오.(단, 1야드 = 91.44cm이다.)
입력은 "yard? " 라고 먼저 출력하고 실수를 입력받는다. 실수는 "double"로 한다.

입력 예) yard? 10.1
출력 예) 10.1yard = 923.5cm
*/

#include <stdio.h>

int main()
{
	double inputYard = 0;
	double perYard = 91.44;
	double outputCm = 0;

	printf("\n");

	printf("yard? ");
	scanf("%lf", &inputYard);

	outputCm = inputYard * perYard;

	printf("\n");
	printf("%.1fyard = %.1fcm\n", inputYard, outputCm);

	

	return 0;
}