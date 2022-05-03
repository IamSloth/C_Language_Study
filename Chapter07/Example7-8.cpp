/***************************************************

자기주도 C언어 프로그래밍
Page141, Example 7-8

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
아래 출력예와 같이 2단부터 4단까지의 구구단을 출력하는 프로그램을 작성하시오.

출력 예) 
*/


#include <stdio.h>

int main()
{
	printf("\n");

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 2; j <= 4; j++)
		{
			printf("%d * %d = %2d ",j,i,j*i );
		}
		printf("\n");
	}


	return 0;
}