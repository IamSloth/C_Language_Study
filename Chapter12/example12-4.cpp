/***************************************************
자기주도 C언어 프로그래밍
Page247, example 12-4

This code is just for studying.
This code was written on April 15, 2022.
by IamSloth

****************************************************/


/** 문제 **
정사각형의 넓이를 입력받아서 한 변의 길이를 구하고 밑과 지수를 입력받아
거듭제곱의 결과를 출력하는 프로그램을 작성하시오.

입력 예) 
		 
출력 예) 

정사각형의 넓이 : 36
정사각형의 한 변의 길이 : 6.000000
밑과 지수 : 4 2
4.000000의 2.000000승은 16.000000입니다

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float inputArea;
	float base;
	float exp;

	printf("정사각형의 넓이 : ");
	scanf("%f", &inputArea);
	printf("정사각형의 한 변의 길이 : %f\n", sqrt(inputArea));
	printf("밑과 지수 : ");
	scanf("%f %f", &base, &exp);
	printf("%f의 %f승은 %f입니다.\n", base, exp, pow(base, exp));

	return 0;
}