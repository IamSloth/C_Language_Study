/***************************************************

자기주도 C언어 프로그래밍
Page109, Assesment 5-4

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
1 ~ 12 사이의 정수를 입력받아 평년의 경우 입력받은 월의 날수를 출력하는 프로그램을 작성하시오.

입력 예) 2
출력 예) 28
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int month = 0;

	scanf("%d", &month);

	printf("\n");

	if (month <= 7 && month != 2)
	{
		if ((month % 2) == 1)
		{
			printf("31\n");

		}

		else
		{
			printf("30\n");
		}
	}

	else if (month > 7 && month != 2)
	{
		if ((month % 2) == 1)
		{
			printf("30\n");
		}

		else
		{
			printf("31\n");
		}
	}

	else // month == 2
	{
		printf("28\n");
	}


	return 0;
}