/***************************************************

자기주도 C언어 프로그래밍
Page103, Self Test 5-7

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
영문 대문자를 입력받아
'A'이면 "Excellent" 'B' 이면 "Good" 'C'이면 Usually
'D'이면, "Effort", 'F'이면 "Failure" 그 외 문자이면, "error"
라고 출력하는 프로그램을 작성하시오.

입력 예) B
출력 예) Good
*/

#include <stdio.h>

int main()
{

	printf("\n");

	char ch = 0;

	
	scanf(" %c", &ch);

	printf("\n");

	switch (ch)
	{
	case 'A':
		printf("Excellent\n");
		break;

	case 'B':
		printf("Good\n");
		break;

	case 'C':
		printf("Usually\n");
		break;

	case 'D':
		printf("Effort\n");
		break;

	case 'F':
		printf("Falilure\n");
		break;

	default:
		printf("error\n");
		break;
	}

	return 0;
}