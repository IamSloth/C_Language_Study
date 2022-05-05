/***************************************************

자기주도 C언어 프로그래밍
Page228, Example 11-6

This code is just for studying.
This code was written on April 7, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수의 연산식을 입력받아 연산을 위한 함수를 호출하여 사칙연산의 결과를 출력하는 프로그램을 작성하시오.
(/의 경우는 정수 부분만 출력하고 사칙연산 이외의 연산 결과는 0으로 한다.)

입력 예) 10 + 20

출력 예) 10 + 20 = 30

*/


#include <stdio.h>

int calculate(int num1, char op, int num2);

int main()
{
	int inputNum[2];
	char op = 0;
	
	scanf("%d %c %d", &inputNum[0], &op, &inputNum[1]);

	printf("%d %c %d = %d\n", inputNum[0], op, inputNum[1], calculate(inputNum[0], op, inputNum[1]));

	return 0;
}

int calculate(int num1, char op, int num2)
{
	switch (op)
	{
		case '+':
		{
			return num1 + num2;
			break;
		}
		case '-':
		{
			return num1 - num2;
			break;
		}
		case '*':
		{
			return num1 * num2;
			break;
		}
		case '/':
		{
			return num1 / num2;
			break;
		}
		default:
			return 0;
	
	}
}