/***************************************************

자기주도 C언어 프로그래밍
Page228, Selftest 11-5

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
10 이하의 두 정수 m과 n을 입력 받아서 m을 n만큼 거듭제곱하여 나온 값(m^n)을 리턴하는
함수를 작성하여 다음과 같이 출력하는 프로그램을 작성하시오.

입력 예) 2 10

출력 예) 1024

*/


#include <stdio.h>

int power(int num1, int num2);

int main()
{
	int inputNum1, inputNum2;
	scanf("%d %d", &inputNum1, &inputNum2);

	printf("%d", power(inputNum1, inputNum2));

	printf("\n");

	return 0;
}

int power(int num1, int num2)
{
	int output = 1;
	for (int i = 0; i < num2; i++)
	{
		output *= num1;
	}

	return output;
}