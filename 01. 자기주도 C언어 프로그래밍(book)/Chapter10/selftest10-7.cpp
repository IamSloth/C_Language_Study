/***************************************************

자기주도 C언어 프로그래밍
Page210, Selftest 10-7

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
배열을 만들어서 반복문을 이용하여 아래와 같이 저장한 후 출력하는 프로그램을 작성하시오.

입력 예) 

출력 예) 1 1 1 1 1
		 1 2 3 4 5
		 1 3 6 10 15
		 1 4 10 20 35
		 1 5 15 35 70
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int output[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		output[0][i] = 1;
		output[i][0] = 1;
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			output[i][j] = output[i - 1][j] + output[i][j - 1];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", output[i][j]);
		}
		printf("\n");
	}




	

	return 0;
}