/***************************************************

자기주도 C언어 프로그래밍
Page120, Example 6-5

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수를 계속 입력 받다가 0이 입력되면 입력된 수 중
홀수의 합과 평균을 출력하는 프로그램을 작성하시오.
(정수 미만은 버림)

입력 예) 5 8 17 6 31 0

출력 예) 홀수의 합 = 53
		 홀수의 평균 = 17
*/

#include <stdio.h>

int main()
{

	printf("\n");

	
	int inputNum = 0;
	int oddCount = 0;
	int oddSum = 0;
	int oddAvg = 0;
	
	while (1)
	{
		scanf("%d", &inputNum);

		if (inputNum == 0) break;
		if (inputNum % 2 == 0) continue;
		oddSum += inputNum;
		oddCount++;
	}

	oddAvg = oddSum / oddCount;
	printf("홀수의 합 = %d \n", oddSum);
	printf("홀수의 평균 = %d \n", oddAvg);

	printf("\n");

	return 0;
}