/***************************************************

자기주도 C언어 프로그래밍
Page225, Selftest 11-4

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
세 개의 정수를 전달받아 최대값을 구하여 리턴하는 함수를 작성하고
세 정수를 입력받아 최대값을 출력하는 프로그램을 작성하시오.

입력 예) -10 115 33

출력 예) 115

*/


#include <stdio.h>

int maximum(int num1, int num2, int num3);

int main()
{
	int inputNum1, inputNum2, inputNum3;
	scanf("%d %d %d", &inputNum1, &inputNum2, &inputNum3);

	printf("%d", maximum(inputNum1, inputNum2, inputNum3));

	printf("\n");


	return 0;
}

int maximum(int num1, int num2, int num3)
{
	int max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	return max;
}