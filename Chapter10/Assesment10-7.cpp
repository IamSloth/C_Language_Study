/***************************************************

자기주도 C언어 프로그래밍
Page213, Assesment 10-7

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
2행 3열 배열을 두 개 선언하여 각각의 값을 입력 받은 후
두 배열의 같은 위치끼리 곱하여 새로운 배열에 저장한 후 출력하는 프로그램을 작성하시오.

입력 예) first array
		 3 6 9
		 8 5 2
		 second array
		 9 8 7
		 6 5 4

출력 예) 27 48 63
		 48 25 8
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int arr1[2][3] = { 0 };
	int arr2[2][3] = { 0 };
	int arr3[2][3] = { 0 };

	printf("first array\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("second array\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr3[i][j] = arr1[i][j] * arr2[i][j];
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;
}