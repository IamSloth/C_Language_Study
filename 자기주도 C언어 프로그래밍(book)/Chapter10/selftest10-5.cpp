/***************************************************

자기주도 C언어 프로그래밍
Page205, Selftest 10-5

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
2행 4열의 배열 두 개를 만들어서 입력을 받고 두 배열의 곱을 구하여
출력하는 프로그램을 작성하시오.

입력 예) first array
		 1 2 3 4 
		 5 6 7 8 
		 second array
		 1 4 7 8
		 3 6 9 8

출력 예) 1 8 21 32
		 15 36 63 64
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int arr1[2][4] = { 0 };
	int arr2[2][4] = { 0 };
	int multi[2][4] = { 0 };

	printf("first array\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("second array\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr1[i][j] * arr2[i][j]);
		}
		printf("\n");
	}


	

	return 0;
}