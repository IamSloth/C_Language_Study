/***************************************************

자기주도 C언어 프로그래밍
Page174, Example 9-3

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 10개를 입력 받은 후 세번째, 다섯 번째와 마지막으로 입력받은 정수를
차례로 출력하는 프로그램을 작성하시오.

입력 예) 5 3 9 6 8 4 2 8 10 1
출력 예) 9 8 1

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int storedNum[10];
	int inputNum = 0;
	
	for (int i = 0; i< 10; i++)
	{
		scanf("%d", &inputNum);
		storedNum[i] = inputNum;
	}

	printf("%d %d %d", storedNum[3 - 1], storedNum[5 - 1], storedNum[10 - 1]);

	return 0;
}