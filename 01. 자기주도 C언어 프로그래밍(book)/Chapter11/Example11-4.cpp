/***************************************************

자기주도 C언어 프로그래밍
Page224, Example 11-4

This code is just for studying.
This code was written on April 7, 2022.
by IamSloth

****************************************************/


/** 문제 **
합과 차를 각각 리턴하는 함수를 작성한 후 두 정수를 입력받아
함수를 호출하여 두 수의 합과 차를 출력하는 프로그램을 작성하시오.

입력 예) 30 50

출력 예) 두 수의 합 = 80
		 두 수의 차 = 20

*/


#include <stdio.h>

int addNum(int num1, int num2);
int minusNum(int num1, int num2);

int main()
{
	int inputNum1 = 0;
	int inputNum2 = 0;
	scanf("%d %d", &inputNum1, &inputNum2);

	printf("두 수의 합 = %d\n", addNum(inputNum1, inputNum2));
	printf("두 수의 차 = %d\n", minusNum(inputNum1, inputNum2));

	return 0;
}

int addNum(int num1, int num2)
{
	return num1 + num2;
}
int minusNum(int num1, int num2)
{
	int i = num1 - num2;
	if (i < 0)
		i *= -1;
	return i;
}