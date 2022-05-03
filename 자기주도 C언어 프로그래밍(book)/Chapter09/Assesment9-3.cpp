/***************************************************

자기주도 C언어 프로그래밍
Page190, Assesment 9-3

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 정수를 입력받아 홀수 번째 입력받은 정수의 합과 짝수 번째 입력받은 정수의 합을
출력하는 프로그램을 작성하시오.

입력 예) 10 20 25 66 83 7 22 90 1 100
출력 예) odd : 141
		 even : 283
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[10] = {0};
	int oddSum = 0;
	int evenSum = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			oddSum += num[i];
		}

		else
		{
			evenSum += num[i];
		}
	}

	printf("odd : %d\n", oddSum);
	printf("even : %d\n", evenSum);

	return 0;
}