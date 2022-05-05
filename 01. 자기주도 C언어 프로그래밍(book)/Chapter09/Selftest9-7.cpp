/***************************************************

자기주도 C언어 프로그래밍
Page181, Self Test 9-7

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 정수를 입력받아 100 미만의 수 중 가장 큰 수와
100 이상의 수 중 가장 작은 수를 출력하는 프로그램을 작성하시오.
(입력되는 정수의 범위는 1이상 10000미만이다. 만약 해당하는 수가 없을때에는 100을 출력한다.)

입력 예) 88 123 659 15 443 1 99 313 105 48
출력 예) 99 105

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[10];
	int min = 9999;
	int max = 1; 

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] >= 10000)
		{
			printf("잘못된 수를 입력하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}
	}

	for (int i = 1; i < 10; i++)
	{
		if (num[i] > 100)
		{
			if (min > num[i])
			{
				min = num[i];
			}
		}

		else
		{
			if (max < num[i])
			{
				max = num[i];
			}
		}
	}

	printf("%d %d", max, min);

	printf("\n");

	return 0;
}