/***************************************************

자기주도 C언어 프로그래밍
Page122, Self Test 6-5

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수를 입력받아서 3의 배수가 아닌 경우에는 아무 작업도 하지 않고
3의 배수인 경우에는 3으로 나눈 몫을 출력하는 작업을 반복하다가
-1이 입력되면 종료하는 프로그램을 작성하시오.

예) 5
	12
	4
	21
	7
	100
	-1
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int result = 0;

	while (1)
	{
		scanf("%d", &inputNum);

		if (inputNum % 3 == 0)
		{
			result = inputNum / 3;
			printf("%d\n", result);
		}

		else if (inputNum % 3 != 0 && inputNum != -1)
		{

		}

		else if (inputNum == -1)
		{
			break;
		}
	}

	printf("\n");

	return 0;
}