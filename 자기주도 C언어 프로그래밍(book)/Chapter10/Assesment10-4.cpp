/***************************************************

자기주도 C언어 프로그래밍
Page211, Assesment 10-3

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
4행 3열의 배열을 선언하고 아래와 같이 초기화한 후 차례대로 출력하고
마지막 줄에 배열의 모든 값을 더한 결과를 출력하는 프로그램을 작성하시오.

입력 예) 

출력 예) 3 5 9
		 2 11 5
		 8 30 10
		 22 5 1
		 111
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int arr[4][3] =
	{
		{3,5,9},
		{2,11,5},
		{8,30,10},
		{22,5,1}
	};

	int sum = 0;
	for (int i = 0; i <4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%3d ", arr[i][j]);
			sum += arr[i][j];
		}
		printf("\n");
	}
	printf("%3d \n", sum);

	return 0;
}