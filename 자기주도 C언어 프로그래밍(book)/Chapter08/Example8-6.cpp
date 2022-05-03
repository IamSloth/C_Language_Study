/***************************************************

자기주도 C언어 프로그래밍
Page161, Example 8-6

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수 n을 입력 받아 n줄만큼 다음과 같이 출력하는 프로그램을 작성하시오.

출력 예)

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int outputNum = 1;
	scanf("%d", &inputNum);

	for (int i = 1; i <= inputNum; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ",outputNum++);
		}

		printf("\n");
	}

	return 0;
}