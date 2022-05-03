/***************************************************

자기주도 C언어 프로그래밍
Page108, Assesment 5-3

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
연도를 입력받아 윤년인지 평년인지 판단하는 프로그램을 작성하시오.
(윤년 : leap year, 평년 : common year)

입력 예) 2008
출력 예) leap year
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int year = 0;

	scanf("%d", &year);

	printf("\n");


	if ((year % 400) == 0)
	{
		printf("leap year\n");
	}

	else if (((year % 4) == 0) && ((year % 100) != 0))
	{
		printf("leap year\n");
	}


	else
	{
		printf("common year\n");
	}

	return 0;
}