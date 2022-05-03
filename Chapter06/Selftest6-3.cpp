/***************************************************

자기주도 C언어 프로그래밍
Page117, Self Test 6-3

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
한 개의 정수를 입력받아 양수(positive integer)인지 음수(negative number)인지
출력하는 작업을 반복하다가 0이 입력되면 종료하는 프로그램을 작성하시오.

예) number? 10
	positive integer
	nubmer? -10
	negative number
	number? 0

*/

#include <stdio.h>

int main()
{
	printf("\n");

	while (1)
	{
		int inputNum = 0;
		printf("number? ");
		scanf("%d", &inputNum);

		if (inputNum > 0)
		{
			printf("positive integer\n\n");
		}

		else if (inputNum < 0)
		{
			printf("negative number\n\n");
		}

		else
		{
			break;
		}
	}

	printf("\n");

	return 0;
}