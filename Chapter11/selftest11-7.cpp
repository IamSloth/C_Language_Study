/***************************************************

자기주도 C언어 프로그래밍
Page232, Selftest 11-7

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 개의 정수를 입력받아 큰 수는 2로 나눈 몫을 저장하고 작은 수는 2를 곱하여 저장한 후,
출력하는 프로그램을 작성하시오 (참조에 의한 전달을 이용한 함수를 작성하여 값을 수정하고 출력은 메인함수에서 한다.)

입력 예) 100 500

출력 예) 200 250

*/


#include <stdio.h>

void output(int &num1, int &num2);

int main()
{
	int inputNum1, inputNum2;
	scanf("%d %d", &inputNum1, &inputNum2);

	output(inputNum1, inputNum2);

	printf("%d %d", inputNum1, inputNum2);

	printf("\n");

	return 0;
}

void output(int& num1, int& num2)
{
	if (num2 < num1)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	num2 /= 2;
	num1 *= 2;
}