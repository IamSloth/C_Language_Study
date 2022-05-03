/***************************************************

자기주도 C언어 프로그래밍
Page191, Assesment 9-5

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
6명의 몸무게를 입력받아 평균을 출력하는 프로그램을 작성하시오.
출력은 반올림하여 소수 첫째자리까지로 한다.

입력 예) 23.2 39.6 66.4 50.0 45.6 48.0
출력 예) 45.5
*/


#include <stdio.h>

int main()
{
	printf("\n");

	float weight[6] = { 0 };
	float sum = 0;
	float average = 0;

	for (int i = 0; i < 6; i++)
	{
		scanf("%f", &weight[i]);
		sum += weight[i];
	}

	average = sum / 6;
	printf("%.1f", average);


	return 0;
}