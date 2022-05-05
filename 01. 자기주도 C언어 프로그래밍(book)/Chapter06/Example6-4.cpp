/***************************************************

자기주도 C언어 프로그래밍
Page118, Example 6-4

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수를 계속 입력을 받다가 0이 입력되면 0을 제외하고
이전에 입력된 자료의 수와 합계, 평균을 출력하는 프로그램을 작성하시오.

입력 예) 15 88 97 0

출력 예) 입력된 자료의 개수 = 3
		 입력된 자료의 합계 = 200
		 입력된 자료의 평균 = 66.67
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int inputNum = 0;
	int count = 0;
	int sum = 0;
	float avg = 0;

	while (1)
	{
		scanf("%d", &inputNum);

		if (inputNum == 0)
		{
			printf("입력된 자료의 개수 = %d\n", count);
			printf("입력된 자료의 합계 = %d\n", sum);
			printf("입력된 자료의 평균 = %.2f\n", avg);
			break;
		}

		else
		{
			count++;
			sum += inputNum;
			avg = (float)sum / (float)count;
		}
	}

	printf("\n");

	return 0;
}