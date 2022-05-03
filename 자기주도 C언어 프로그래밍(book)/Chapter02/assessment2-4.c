/***************************************************

자기주도 C언어 프로그래밍
Page53, Assessment 2-4

This code is just for studying.
This code was written on March 10, 2022.
by IamSloth

****************************************************/

/** 문제 **
세 개의 정수를 입력받아 합과 평균을 출력하는 프로그램을 작성하시오
(단 평균은 소수 이하를 버림하여 정수 부분만 출력한다.)

입력 예) 20 50 100
출력 예) sum = 170
		 avg = 56
*/

#include <stdio.h>

int main()
{
	int i, j, k = 0;

	printf("\n");

	scanf("%d %d %d", &i, &j, &k);

	int sum = i + j + k;
	int avg = sum / 3;

	printf("\n");
	printf("sum = %d\n\n", sum);
	printf("avg = %d\n", avg);

	return 0;
}