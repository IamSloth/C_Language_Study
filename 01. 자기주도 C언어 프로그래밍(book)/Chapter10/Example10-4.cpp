/***************************************************

자기주도 C언어 프로그래밍
Page201, Example 10-4

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** 문제 **
3행 3열의 배열을 선언하고 아래의 출력 예와 같이 초기화 한 후
풀력하는 프로그램을 작성하시오.

입력 예) 
출력 예) 3 5 4
		 2 6 7
		 8 10 1
*/

#include <stdio.h>

int main()
{
	int num[3][3] = {
						{3, 5, 4},
						{2, 6, 7},
						{8, 10, 1}
					};
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}