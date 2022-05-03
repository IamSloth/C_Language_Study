/***************************************************

자기주도 C언어 프로그래밍
Page213, Assesment 10-8

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
4행 2열의 배열을 입력받아 첫 번째 줄에는 가로평균, 두 번째 줄에는 세로평균
그리고 세 번째 줄에는 전체평균을 출력하는 프로그램을 작성하시오.
(소수점 이하는 버림 한다.)

입력 예) 16 27
		 39 100
		 19 88
		 61 20

출력 예) 21 69 53 40
		 33 58
		 46
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum[4][2] = { 0 };
	int rowAvg[4] = { 0 };
	int columnAvg[2] = { 0 };
	int totalAvg = 0;

	for (int i = 0; i < 4; i++) //입력받기
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &inputNum[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < 4; i++) //계산
	{
		for (int j = 0; j < 2; j++)
		{
			rowAvg[i] += inputNum[i][j];
			columnAvg[j] += inputNum[i][j];
			totalAvg += inputNum[i][j];
		}
	
	}
	for (int i = 0; i < 4; i++) //출력
		printf("%d ", rowAvg[i] / 2);
	printf("\n");

	for (int i = 0; i < 2; i++)
		printf("%d ", columnAvg[i] / 4);
	printf("\n");

	printf("%d ", totalAvg / 8);
	printf("\n");

	return 0;
}