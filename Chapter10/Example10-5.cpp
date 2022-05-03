/***************************************************

자기주도 C언어 프로그래밍
Page203, Example 10-5

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** 문제 **
3행 3열의 배열 두 개를 만들어서 입력을 받고
두 배열의 합을 구하여 출력하는 프로그램을 작성하시오.

입력 예)
출력 예) 첫 번째 배열 1행 1 2 3
		 첫 번째 배열 2행 4 5 6 
		 첫 번째 배열 3행 7 8 9
		 두 번째 배열 1행 9 6 3
		 두 번째 배열 2행 8 5 2
		 두 번째 배열 3행 7 4 1
*/

#include <stdio.h>

int main()
{
	int num1[3][3] = { {0} };
	int num2[3][3] = { {0} };

	for (int i = 0; i < 3; i++)
	{	
		printf("첫 번째 배열 %d 행 ", i+1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &num1[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("두 번째 배열 %d 행 ", i+1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &num2[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			num1[i][j] += num2[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", num1[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}