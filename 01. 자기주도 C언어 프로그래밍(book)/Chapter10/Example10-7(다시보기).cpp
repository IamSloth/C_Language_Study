/***************************************************

자기주도 C언어 프로그래밍
Page205, Example 10-6

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** 문제 **
아래와 같은 파스칼 삼각형을 출력하는 프로그램을 작성하시오.
파스칼 삼각형은 첫 번째 줄 첫 번째행을 1로 초기화한 후
다음 줄부터는 바로 위의 값과 바로 위 왼쪽의 값을 더한 값이 된다

입력 예) 
출력 예)	1
			1 1
			1 2 1
			1 3 3 1
			1 4 6 4 1
*/

#include <stdio.h>

int main()
{
	printf("\n");
	int pas[6][6] = { 0 };
	int i, j;

	pas[1][1] = 1;

	for (i = 2; i < 6; i++)
	{
		for (j = 1; j <= i; j++)
		{
			pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
		}
		
	}

	for ( i = 1; i < 6; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			printf("%d ", pas[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;
}