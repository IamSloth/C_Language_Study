/***************************************************

자기주도 C언어 프로그래밍
Page136, Example 7-5

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 정수를 입력받아 그 수들 중 짝수의 개수가 몇 개인지 출력하는 프로그램을 작성하시오.

입력 예) 15 22 3 129 66 81 35 1 46 888
출력 예) 입력받은 짝수는 4개입니다.

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int evenCount = 0;
	int inputNum = 0;

	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &inputNum);
		if (inputNum % 2 == 0)
		{
			evenCount++;
		}
	}
	printf("입력받은 짝수는 %d개입니다.", evenCount);
	printf("\n");

	return 0;
}