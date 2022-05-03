/***************************************************

자기주도 C언어 프로그래밍
Page90, Self Test 5-1

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수를 입력받아 첫 줄에 입력받은 숫자를 출력하고
음수이면 "minus" 라고 출력하는 프로그램을 작성하시오

입력 예) -5 
출력 예) -5
		 minus
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i = 0;

	scanf("%d", &i);

	printf("\n");

	printf("%d\n", i);

	if (i < 0)
	{
		printf("minus\n");
	}


	return 0;
}