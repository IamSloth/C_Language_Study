/***************************************************

자기주도 C언어 프로그래밍
Page147, Assesment 7-7

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
한 개의 자연수를 입력받아 그 수의 배수를 차례로 10개 출력하는 프로그램을 작성하시오.

입력 예) 5
출력 예) 5 10 15 20 25 30 35 40 45 50
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum;

	scanf("%d", &inputNum);

	for (int i = 1; i <= 10; i++)
	{
		printf("%d ", inputNum * i);
	}
	
	printf("\n");

	return 0;
}