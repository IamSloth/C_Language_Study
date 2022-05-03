/***************************************************

자기주도 C언어 프로그래밍
Page156, Example 8-4

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수 n을 입력받아 n줄만큼 다음과 같이 출력하는 프로그램을 작성하시오.

출력 예)
     *
    **
   ***
  ****
 ***** 
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum=0;
	scanf("%d", &inputNum);

	for (int i = 1; i <= inputNum; i++)
	{
		for (int j = 1; j <= inputNum - i; j++)
		{
			printf(" ");
		}

		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}