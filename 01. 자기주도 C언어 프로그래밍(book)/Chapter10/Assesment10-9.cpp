/***************************************************

자기주도 C언어 프로그래밍
Page213, Assesment 10-9

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
행의 크기를 입력받아 파스칼 삼각형을 작성하여
마지막 행부터 첫 번째 행까지 차례로 출력하는 프로그램을 작성하시오
단 행의 크기는 최대 10이다.

입력 예) 6

출력 예) 1 5 10 10 5 1
		 1 4 6 4 1
		 1 3 3 1
         1 2 1
		 1 1
		 1
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int pas[10][10] = { 0 };
	for (int i = 0; i < 10; i++)
		pas[i][0] = 1;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			pas[i][j] = pas[i - 1][j] + pas[i - 1][j - 1];
		}
	}

	int row = 0;
	while (1)
	{
		scanf("%d", &row);
		if (row > 10 || row < 0)
		{
			printf("잘못된 값 입력했어요. 다시 입력하세요.\n");
			continue;
		}
		break;
	}
 
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < row - i; j++)
		{
			printf("%3d ",pas[row-i-1][j]);
		}
		printf("\n");
	}
		

	printf("\n");

	return 0;
}