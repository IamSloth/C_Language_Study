/***************************************************

자기주도 C언어 프로그래밍
Page108, Assesment 5-2

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수를 입력받아 0이면 "zero", 양수이면 "plus", 음수이면 "minus"라고 출력하는 프로그램을 작성하시오.

입력 예) 0
출력 예) zero
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i = 0;
	
	
	scanf("%d", &i);

	printf("\n");

	if (i > 0)
	{
		printf("plus\n");
	}

	else if( i < 0)
	{
		printf("minus\n");
	}

	else
	{
		printf("zero\n");
	}

	return 0;
}