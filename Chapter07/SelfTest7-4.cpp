

/***************************************************

자기주도 C언어 프로그래밍
Page137, Self Test 7-4

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수를 입력받아서 입력받은 정수부터 100까지의 합을 출력하는 프로그램을 작성하시오.
(입력받는 정수는 100 이하의 자연수이다.)

입력 예) 95
출력 예) 585
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int sum = 0;
	while (1)
	{
		scanf("%d", &inputNum);

		if (1 <= inputNum && inputNum <= 100)
		{
			for (inputNum; inputNum <= 100; inputNum++)
			{
				sum += inputNum;
			}
			printf("%d", sum);
			printf("\n");
			break;
		}

		else
		{
			printf("다시 입력하세요.(100 이하의 자연수)\n");
			continue;
		}
	}
	

	printf("\n");

	return 0;
}