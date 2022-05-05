/***************************************************

자기주도 C언어 프로그래밍
Page147, Assesment 7-6

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 개의 정수를 입력받아 작은 수부터 큰 수까지의 3의 배수이거나 5의 배수인 수들의
합과 평균을 출력하는 프로그램을 작성하시오.
(평균은 반올림하여 소수 첫째자리까지 출력한다.)

입력 예) 10 15
출력 예) sum : 37
		 avg : 12.3
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputSmallNum = 0;
	int inputBigNum = 0;
	int sum = 0;
	int count = 0;
	float avg = 0;

	scanf("%d%d", &inputSmallNum, &inputBigNum);

	if (inputSmallNum > inputBigNum)
	{
		int temp = inputSmallNum;
		inputSmallNum = inputBigNum;
		inputBigNum = temp;
	}

	for (int i = inputSmallNum; i <= inputBigNum; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			count++;
			sum += i;
		}
	}

	avg = (float)sum / count;
	printf("sum : %d\n",sum);
	printf("avg : %.1f\n",avg);
	
	printf("\n");

	return 0;
}