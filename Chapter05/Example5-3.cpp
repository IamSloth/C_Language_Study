/***************************************************

자기주도 C언어 프로그래밍
Page94, Example 5-3

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
점수를 입력받아 80점 이상이면 합격 아니면 불합격을 출력하는 프로그램을 작성하시오.

입력 예) 점수를 입력하세요. 89
출력 예) 축하합니다. 합격입니다.
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i = 0;

	scanf("%d", &i);

	printf("\n");

	if (i > 80)
	{
		printf("축하합니다. 합격입니다.\n");
	}

	else
	{
		printf("불합격.\n");
	}
	


	return 0;
}