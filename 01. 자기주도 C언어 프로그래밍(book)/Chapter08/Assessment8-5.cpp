﻿

/***************************************************

자기주도 C언어 프로그래밍
Page166, Assesment 8-5

This code is just for studying.
This code was written on March 29, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수 n을 입력받아 각 문제의 출력예와 같이 출력되는 프로그램을 작성하시오

입력 예) 3
출력 예) 

    *
  ***
*****

*/


#include <stdio.h>

int main()
{
	int inputNum = 0;

	scanf("%d", &inputNum);
	
	for (int i = 1; i <= inputNum; i++)
	{
		for (int j = 1; j <= inputNum*2 - (i * 2); j++)
		{
			printf(" ");
		}

		for (int j = 1; j <= (i * 2) - 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}