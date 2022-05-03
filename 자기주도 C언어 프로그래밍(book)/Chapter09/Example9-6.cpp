/***************************************************

자기주도 C언어 프로그래밍
Page180, Example 9-6

This code is just for studying.
This code was written on March 31, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 자연수를 입력받아 그 중 가장 큰 수를 출려하는 프로그램을 작성하시오.

입력 예) 5 10 8 55 6 31 12 24 61 2
출력 예) 61

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int storedNum[10];
	int biggestNum = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &inputNum);
		storedNum[i] = inputNum;
	}

	if (storedNum[0] > storedNum[1])
	{
		biggestNum = storedNum[0];
	}

	else
	{
		biggestNum = storedNum[1];
	}

	for (int i = 2; i < 9; i++)
	{
		if (storedNum[i] > biggestNum)
		{
			biggestNum = storedNum[i];
		}

	}

	printf("%d\n\n", biggestNum);

	return 0;
}