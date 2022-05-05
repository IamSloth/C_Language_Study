/***************************************************

자기주도 C언어 프로그래밍
Page181, Self Test 9-6

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 정수를 입력받아 그 중 가장 작은 수를 출력하는 프로그램을 작성하시오.
(입력으로 주어지는 정수는 1000을 넘지 않는다.)

입력 예) 5 10 8 55 6 31 12 24 61 2
출력 예) 2

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[10];
	int smallNum;

	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	smallNum = num[0];

	for (int i = 1; i < 10; i++)
	{
		if (smallNum > num[i])
		{
			smallNum = num[i];
		}
	}

	printf("%d", smallNum);

	printf("\n");

	return 0;
}