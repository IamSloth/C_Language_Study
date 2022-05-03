/***************************************************

자기주도 C언어 프로그래밍
Page96, Example 5-4

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
입력받은 점수를 "수우미양가" 로 평가하는 프로그램을 작성하시오.

입력 예) 점수를 입력하세요. 89
출력 예) 우
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int score = 0;

	printf("점수를 입력하세요. ");
	scanf("%d", &score);

	printf("\n");

	if (score >= 90)
	{
		printf("수\n");
	}

	else if(score >= 80)
	{
		printf("우\n");
	}

	else if (score >= 70)
	{
		printf("미\n");
	}

	else if (score >= 60)
	{
		printf("양\n");
	}

	else
	{
		printf("가\n");
	}
	


	return 0;
}