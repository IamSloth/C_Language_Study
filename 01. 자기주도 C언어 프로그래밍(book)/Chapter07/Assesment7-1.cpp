/***************************************************

자기주도 C언어 프로그래밍
Page146, Assesment 7-1

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
10 이하의 자연수 n을 입력받아 아래와 같이 "JUNGOL" 을 n번 출력하는 프로그램을 작성하시오.

입력 예) 4
출력 예) JUNGOL
		 JUNGOL
		 JUNGOL
		 JUNGOL
*/
#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	scanf("%d", &inputNum);

	for (int i = 0; i < inputNum; i++)
	{
		printf("JUNGOL\n");
	}

	printf("\n");

	return 0;
}