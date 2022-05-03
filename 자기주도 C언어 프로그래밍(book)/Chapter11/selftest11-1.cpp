/***************************************************

자기주도 C언어 프로그래밍
Page219, Selftest 11-1

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
문자열 "~!@#$%^&*()_+|"를 출력하는 함수를 작성하고 정수를 입력받아 입력받은 수만큼 함수를 호출하는 프로그램을 작성하시오.

입력 예) 3

출력 예) 
~!@#$^&*()_+|
~!@#$^&*()_+|
~!@#$^&*()_+|
*/


#include <stdio.h>

void printOutChar();

int main()
{
	int inputNum = 0;
	scanf("%d", &inputNum);

	for (int i = 0; i < inputNum; i++)
	{
		printOutChar();
	}

	printf("\n");

	
	return 0;
}

void printOutChar()
{
	printf("~!@#$%^&*()_+|\n");
}