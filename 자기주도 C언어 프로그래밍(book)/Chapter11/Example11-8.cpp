/***************************************************

자기주도 C언어 프로그래밍
Page226, Example 11-5

This code is just for studying.
This code was written on April 7, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 정수를 입력받아 합과 곱을 출력하는 프로그램을 구조화하여 작성하시오.

입력 예) 두 수를 입력하세요. 35 26

출력 예) 합 : 61
		 곱 : 910

*/


#include <stdio.h>

void input();
int add(int num1, int num2);
int multiple(int num1, int num2);
void output();


int main()
{
	input();
	output();

	return 0;
}

int num1;
int num2;

void input()
{
	printf("두 수를 입력하세요. ");
	scanf("%d %d", &num1, &num2);
}

void output()
{
	printf("합 : %d\n", add(num1, num2));
	printf("곱 : %d\n", multiple(num1, num2));
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int multiple(int num1, int num2)
{
	return num1 * num2;
}