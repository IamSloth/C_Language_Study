/***************************************************

자기주도 C언어 프로그래밍
Page126, Assesment 6-1

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수를 입력받아 1부터 입력받은 정수까지를 차례대로 출력하는 프로그램을 작성하시오.

입력 예) 5
출력 예) 1 2 3 4 5
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int outputNum = 1;

	scanf("%d", &inputNum);

	while (outputNum <= inputNum)
	{
		printf("%d ", outputNum);
		outputNum++;
	}

	printf("\n");

	return 0;
}