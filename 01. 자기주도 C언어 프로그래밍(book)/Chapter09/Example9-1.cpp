/***************************************************

자기주도 C언어 프로그래밍
Page168, Example 9-1

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
5개의 정수를 입력받은 후 차례로 출력하는 프로그램을 작성하시오.

입력 예) 5 10 9 3 2
출력 예) 5 10 9 3 2 

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int storedNum[5];
	int inputNum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &inputNum);
		storedNum[i] = inputNum;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", storedNum[i]);
	}

	return 0;
}