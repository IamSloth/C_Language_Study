/***************************************************

자기주도 C언어 프로그래밍
Page262, assesment 12-7

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
원주율을 3.141592로 매크로 상수로 정의하고 원의 넓이를 구하는 매크로 함수를 작성하여
반지름을 입력받아 원의 넓이를 출력하는 프로그램을 작성하시오 
소수 넷째자리에서 반올림하여 셋째자리까지 출력

입력 예) radius : 1.5

출력 예) area = 7.069

*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592
#define calArea(x) x*x*PI

int main()
{
	float inputRad = 0;
	printf("radius : ");
	scanf("%f", &inputRad);

	printf("area = ");
	printf("%.3f\n", calArea(inputRad));
	return 0;
}

