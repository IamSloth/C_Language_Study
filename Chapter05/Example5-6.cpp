/***************************************************

자기주도 C언어 프로그래밍
Page100, Example 5-6

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수 3개를 입력 받아 그 중 가장 큰 수를 출력하는 프로그램을 작성하시오.

입력 예) 세 수를 입력하세요. 1 5 4
출력 예) 입력받은 수 중 가장 큰 수는 5입니다.
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i, j, k = 0;

	printf("세 수를 입력하세요. ");
	scanf("%d %d %d", &i, &j, &k);

	printf("\n");

	int maxNum = 0;

	if (i > j && i > k)
	{
		maxNum = i;
	}

	else if (j > i && j > k)
	{
		maxNum = j;
	}

	else
	{
		maxNum = k;
	}

	printf("입력받은 수 중 가장 큰 수는 %d입니다.\n", maxNum);
	

	return 0;
}