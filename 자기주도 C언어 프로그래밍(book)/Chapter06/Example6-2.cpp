/***************************************************

자기주도 C언어 프로그래밍
Page114, Example 6-2

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수 변수 num을 선언하여 1을 대입한 후 1씩 증가시키면서 10까지의 누적 합을 구하는 프로그램을
while문을 이용하여 작성하고, 1부터 10가지의 합과 while문이 끝난 후의 num의 값을 출력하는 프로그램을
작성하시오.

출력 예) 1부터 10까지의 합 = 55
		 while문이 끝난 후의 num의 값 = 11
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int num = 1;
	int sum = 0;

	while (num <= 10)
	{
		sum += num;
		num++;
	}

	printf("1부터 10까지의 합 = %d\n", sum);
	printf("while문이 끝난 후의 num의 값 = %d", num);

	printf("\n");

	return 0;
}