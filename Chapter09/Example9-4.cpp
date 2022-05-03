/***************************************************

자기주도 C언어 프로그래밍
Page175, Example 9-4

This code is just for studying.
This code was written on March 31, 2022.
by IamSloth

****************************************************/


/** 문제 **
최대 100개까지의 정수를 차례로 입력받다가 0이 입력되면 입력을 중단하고
짝수번째에 입력된 정수를 모두 출력하는 프로그램을 작성하시오.

입력 예) 11 25 3 9 15 6 8 7 12 0
출력 예) 25 9 6 7

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int storedNum[100];
	int count = 0;
	int inputNum = 0;

	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &inputNum);
		if (inputNum == 0)
		{
			break;
		}

		else
		{
			storedNum[i] = inputNum;
			count++;
		}
	}

	for (int i = 1; i < count; i+=2)
	{
		printf("%d ", storedNum[i]);
	}


	return 0;
}