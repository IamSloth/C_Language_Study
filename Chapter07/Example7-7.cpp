/***************************************************

자기주도 C언어 프로그래밍
Page141, Example 7-7

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
아래 출력예와 같이 출력하는 프로그램을 작성하시오.

출력 예) 1 1 1 1 1
		 2 2 2 2 2
		 3 3 3 3 3
		 4 4 4 4 4
		 5 5 5 5 5

		 1 2 3 4 5
		 1 2 3 4 5
		 1 2 3 4 5
		 1 2 3 4 5
		 1 2 3 4 5
*/


#include <stdio.h>

int main()
{
	printf("\n");

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}