

/***************************************************

자기주도 C언어 프로그래밍
Page138, Self Test 7-5

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/

/** 문제 **
10개의 정수를 입력 받아 3의 배수의 개수와 5의 배수의 개수를
각각 출력하는 프로그램을 작성하시오.

입력 예) 10 15 36 99 100 19 46 88 87 13
출력 예) Multiples of 3 : 4
		 Multiples of 5 : 3
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int count3 = 0;
	int count5 = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &inputNum);
		if (inputNum % 3 == 0)
		{
			count3++;
		}

		if (inputNum % 5 == 0)
		{
			count5++;
		}
	}

	printf("Multiples of 3 : %d\n", count3);
	printf("Multiples of 5 : %d\n", count5);
	
	printf("\n");

	return 0;

}