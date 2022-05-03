

/***************************************************

자기주도 C언어 프로그래밍
Page135, Self Test 7-3

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/

/** 문제 **
한 개의 수를 입력받아 1부터 입력받은 수까지의 짝수를 차레대로 출력하는 프로그램을 작성하시오.
(입력 받는 수는 2 이상 50 이하의 정수이다.)

입력 예) 10
출력 예) 2 4 6 8 10
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	while (1)
	{ㄹ
		scanf("%d", &inputNum);

		if (2 <= inputNum && inputNum <= 50)
		{
			for (int i = 2; i <= inputNum; i++)
			{
				if (i % 2 == 0)
				{
					printf("%d ", i);
				}
				
			}
			printf("\n");
			break;
		}

		else
		{ㄻ
			printf("다시 입력하세요.(2 이상 50 이하의 정수)\n");
			continue;
		}
	}
	

	printf("\n");

	return 0;
}