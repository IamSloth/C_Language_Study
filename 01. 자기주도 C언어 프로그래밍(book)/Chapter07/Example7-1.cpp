/***************************************************

자기주도 C언어 프로그래밍
Page130, Example 7-1

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
10 이하의 정수를 입력받아 입력받은 정수만큼 "C언어 프로그래밍" 이라고 출력하는 프로그램을 작성하시오

입력 예) 5
출력 예) C언어 프로그래밍
		 C언어 프로그래밍
		 C언어 프로그래밍
		 C언어 프로그래밍
		 C언어 프로그래밍

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum;

	scanf("%d", &inputNum);

	for (int i = 0; i < inputNum; i++)
	{
		printf("C언어 프로그래밍\n");
	}

	return 0;
}