/***************************************************

자기주도 C언어 프로그래밍
Page115, Self Test 6-2

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
100 이하의 정수를 입력받아 while 문을 이용하여
1부터 입력받은 정수까지의 합을 구하여 출력하는 프로그램을 작성하시오.

입력 예) 10
출력 예) 55
*/

#include <stdio.h>

int main()
{
	int inputNum = 0;
	int sum = 0;

	printf("\n");

	scanf("%d", &inputNum);

	while (inputNum >= 0)
	{
		sum += inputNum;
		inputNum--;
	}

	printf("%d\n", sum);

	printf("\n");

	return 0;
}