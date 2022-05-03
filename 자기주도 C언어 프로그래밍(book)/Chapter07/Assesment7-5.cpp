/***************************************************

자기주도 C언어 프로그래밍
Page147, Assesment 7-5

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 정수를 입력받아 입력받은 수들 중 짝수의 개수와 홀수의 개수를 각각 구하여
출력하는 프로그램을 작성하시오.

입력 예) 10 20 30 55 66 77 88 99 100 15
		 
출력 예) even : 6
		 odd : 4
*/
#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int evenCount = 0;
	int oddCount = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &inputNum);
		if (inputNum % 2 == 0)
		{
			evenCount++;
		}

		else
		{
			oddCount++;
		}

	}

	printf("even : %d\n", evenCount);
	printf("odd : %d\n", oddCount);
	
	printf("\n");

	return 0;
}