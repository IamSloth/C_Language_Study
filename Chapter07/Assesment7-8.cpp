/***************************************************

자기주도 C언어 프로그래밍
Page147, Assesment 7-8

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
행과 열의 수를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.

입력 예) 3 4
출력 예) 1 2 3 4
		 2 4 6 8
		 3 6 9 12
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int rows;   // 가로줄 몇 개?     *참고 1행(첫번째 가로줄)
	int columns;// 세로줄 몇 개?     *참고 1열(첫번째 세로줄)
	

	scanf("%d%d", &rows, &columns);

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= columns; j++)
		{
			printf("%d ", j*i);
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;
}