/***************************************************

자기주도 C언어 프로그래밍
Page146, Assesment 7-3

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수를 입력받아서 1부터 입력받은 정수까지의 5의 배수의 합을 구하여 출력하는 프로그램을 작성하시오.

입력 예) 20
출력 예) 50
*/
#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int sum = 0;

	scanf("%d", &inputNum);

	for (int i = 5; i <= inputNum; i += 5)
	{
		sum += i;
	}

	printf("%d", sum);

	printf("\n");

	return 0;
}