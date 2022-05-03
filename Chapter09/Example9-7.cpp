/***************************************************

자기주도 C언어 프로그래밍
Page182, Example 9-7

This code is just for studying.
This code was written on March 31, 2022.
by IamSloth

****************************************************/


/** 문제 **
4자리 이하의 10개의 정수를 입력받아
짝수 중 가장 큰 값과 홀수 중 가장 작은 값을 출력하는 프로그램을 작성하시오.

입력 예) -5 10 -8 55 6 -31 12 -24 61 2
출력 예) -31 12

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int storedEvenNum[10] = { 0 };
	int storedOddNum[10] = { 0 };
	int evenBigNum = 0;
	int oddSmallNum = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &inputNum);
		if (inputNum >= 10000 || inputNum <= -10000)
		{
			printf("잘못된 수를 입력하셨습니다. 프로그램을 종료합니다.\n\n");
			break;
		}

		else if (inputNum % 2 == 0)
		{
			storedEvenNum[i] = inputNum;
		}

		else
		{
			storedOddNum[i] = inputNum;
		}
		
	}

	if (storedEvenNum[0] > storedOddNum[1])
	{
		evenBigNum = storedEvenNum[0];
	}

	else
	{
		evenBigNum = storedEvenNum[1];
	}

	if (storedOddNum[0] > storedOddNum[1])
	{
		oddSmallNum = storedOddNum[1];
	}

	else
	{
		oddSmallNum = storedOddNum[0];
	}

	for (int i = 2; i < 10; i++)
	{
		if (storedEvenNum[i] > evenBigNum)
		{
			evenBigNum = storedEvenNum[i];
		}

		if (storedOddNum[i] < oddSmallNum)
		{
			oddSmallNum = storedOddNum[i];
		}
	}

	printf("%d %d\n\n", oddSmallNum, evenBigNum);

	return 0;
}