/***************************************************

자기주도 C언어 프로그래밍
Page229, Selftest 11-6

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
위 소스(228page 예제 6)에서 함수 내의 switch 문을 if~ else if~ else 문으로 바꾸어 실행해보자.

입력 예) 10 + 20
 
출력 예) 10 + 20 = 30

*/


#include <stdio.h>

int calculate(int num1, int num2, char op);

int main()
{
	int inputNum1, inputNum2;
	char op;
	scanf("%d %c %d", &inputNum1, &op, &inputNum2 );

	printf("%d %c %d = %d", inputNum1, op, inputNum2, calculate(inputNum1, inputNum2, op));

	printf("\n");

	return 0;
}

int calculate(int num1, int num2, char op)
{
	if (op == '+')
		return num1 + num2;
	else if (op == '-')
		return num1 - num2;
	else if (op == '*')
		return num1 * num2;
	else if (op == '/')
		return num1 / num2;
	return 0;
}