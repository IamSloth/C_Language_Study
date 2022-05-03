/***************************************************

자기주도 C언어 프로그래밍
Page104, Example 5-8

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
입력받은 점수를 "수우미양가"로 평가하는 프로그램을 작성하시오.

입력 예) 점수를 입력하세요. 92
출력 예) 수
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i = 0;
		
	printf("점수를 입력하세요.  ");

	scanf("%d", &i);

	printf("\n");

	switch (i/10)
	{
		case 10:
		case 9:
		{
			printf("수\n");
			break;
		}

		case 8:
		{
			printf("우\n");
			break;
		}

		case 7:
		{
			printf("미\n");
			break;
		}

		case 6:
		{
			printf("양\n");
			break;
		}

		default:
		{
			printf("가\n");
		}
	}

	return 0;
}