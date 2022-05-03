/***************************************************

자기주도 C언어 프로그래밍
Page185, Self Test 9-8

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 정수를 입력받아 배열에 저장한 후 짝수 번째 입력된 값의 합과 홀수 번째 입력된 값의 평균을
출력하는 프로그램을 작성하시오. 평균은 반올림하여 소수 첫째자리까지 출력한다.


입력 예) 95 100 88 65 76 89 58 93 77 99
출력 예) sum : 446
		 avg : 78.8
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[10];
	int evenSum = 0;
	int oddSum = 0;
	int count = 1;
	float oddAverage = 0;


	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (count % 2 == 0)
		{
			evenSum += num[i];
		}

		else
		{
			oddSum += num[i];
		}

		count++;
	}

	oddAverage = (float)oddSum / 5;

	printf("sum : ");
	printf("%d\n", evenSum);
	printf("avg : ");
	printf("%.1f\n", oddAverage);
	printf("\n");

	return 0;
}