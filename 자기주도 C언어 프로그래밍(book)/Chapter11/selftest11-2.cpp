/***************************************************

자기주도 C언어 프로그래밍
Page221, Selftest 11-2

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
반지름의 길이를 전달받아 넓이를 출력하는 함수를 작성하고 반지름의 길이를 입력받아
함수를 호출하여 넓이를 출력하는 프로그램을 작성하시오.
(원주율은 3.14로 하고 반올림하여 소수 둘째자리까지 출력한다.
 원의 넓이 = 반지름 * 반지름 * 원주율이다.)

입력 예) 10

출력 예) 314.00
*/


#include <stdio.h>
float pi = 3.14;
void circleArea(int radius);

int main()
{
	int inputNum = 0;
	scanf("%d", &inputNum);

	circleArea(inputNum);

	printf("\n");


	return 0;
}

void circleArea(int radius)
{
	float area = (float)radius * (float)radius * pi;
	printf("%.2f", area);
}