

/***************************************************

자기주도 C언어 프로그래밍
Page162, Self Test 8-6

This code is just for studying.
This code was written on March 29, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수 n을 입력받아서 다음과 같이 출력하는 프로그램을 작성하시오.

입력 예) 3
출력 예)
ABC
DE
F
 
*/


#include <stdio.h>

int main()
{
	int inputNum = 0;
	char outputChar = 'A';

	scanf("%d", &inputNum);

	for (int i = 1; i <= inputNum; i++)
	{
		for (int j = 1; j <= inputNum+1-i; j++)
		{
			printf("%c",outputChar++);
		}

		printf("\n");
	}
	

	return 0;
}