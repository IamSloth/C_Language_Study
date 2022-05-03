/***************************************************

자기주도 C언어 프로그래밍
Page158, Example 8-5

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
아래 모양과 같이 출력하는 프로그램을 for 문을 이용하여 작성하시오.

출력 예)

     ⁕
    ⁕⁕⁕
   ⁕⁕⁕⁕⁕
  ⁕⁕⁕⁕⁕⁕⁕
 ⁕⁕⁕⁕⁕⁕⁕⁕⁕

*/


#include <stdio.h>

int main()
{
	printf("\n");

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			printf(" ");
		}

		for (int j = 1; j <= i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}