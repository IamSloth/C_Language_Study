

/***************************************************

자기주도 C언어 프로그래밍
Page132, Self Test 7-1

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
문자를 입력받아서 입력받은 문자를 20번 반복하여 출력하는 프로그램을 작성하시오.

입력 예) A
출력 예) AAAAAAAAAAAAAAAAAAAA
*/


#include <stdio.h>

int main()
{

	printf("\n");

	char inputChar = 0;
	scanf(" %c", &inputChar);

	for (int i = 0; i < 20; i++)
	{
		printf("%c", inputChar);
	}

	printf("\n");

	return 0;
}