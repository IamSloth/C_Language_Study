/***************************************************

자기주도 C언어 프로그래밍
Page147, Assesment 7-9

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수를 입력받아 다음과 같이 순서쌍을 출력하는 프로그램을 작성하시오.

입력 예) 4
출력 예) (1, 1) (1, 2) (1, 3) (1, 4)
		 (2, 1) (2, 2) (2, 3) (2, 4)
		 (3, 1) (3, 2) (3, 3) (3, 4)
		 (4, 1) (4, 2) (4, 3) (4, 4)
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;

	scanf("%d", &inputNum);

	for (int i = 1; i <= inputNum; i++)
	{
		for (int j = 1; j <= inputNum; j++)
		{
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;
}