/***************************************************

자기주도 C언어 프로그래밍
Page136, Example 7-4

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수를 입력받아서 1부터 입력받은 수 까지의 합을 출력하는 프로그램을 작성하시오.

입력 예) 10
출력 예) 55

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int sum = 0;
	int inputNum = 0;

	scanf("%d", &inputNum);

	for (int i = 1; i <= inputNum; i++)
	{
		sum += i;
	}

	printf("%d", sum);
	printf("\n");

	return 0;
}