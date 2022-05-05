/***************************************************

자기주도 C언어 프로그래밍
Page197, Example 10-2

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수를 입력받다가 0이 입력되면 마지막에 입력된 0을 제외하고
그 때까지 입력된 정수의 일의 자리 숫자가 각각 몇 개인지
작은 수부터 출력하는 프로그램을 작성하시오. (0개인 숫자는 출력하지 않는다.)

입력 예) 10 55 123 63 85 61 125 0
출력 예) 0 : 1개
		 1 : 1개
		 3 : 2개
		 5 : 3개
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int count[11] = { 0 };

	while (1)
	{
		scanf("%d", &inputNum);

		if (inputNum == 0)
		{
			break;
		}

		else
		{
			int i = inputNum % 10;
			count[i]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (count[i] != 0)
		{
			printf("%d: %d개\n", i, count[i]);
		}
	}


	printf("\n");

	return 0;
}