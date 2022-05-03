/***************************************************
자기주도 C언어 프로그래밍
Page248, selftset 12-4

This code is just for studying.
This code was written on April 15, 2022.
by IamSloth

****************************************************/


/** 문제 **
원의 넓이를 입력받아 반지름의 길이를 소수 둘째자리까지 출력하는 프로그램을 작성하시오
원의 넓이 = 반지름 * 반지름 * 3.14 식을 이용하시오

입력 예) 314
		 
출력 예) 10.00

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float inputArea;
	float pi = 3.14;

	scanf("%f", &inputArea);
	printf("%.2f\n",sqrt((inputArea/pi)));

	return 0;
}