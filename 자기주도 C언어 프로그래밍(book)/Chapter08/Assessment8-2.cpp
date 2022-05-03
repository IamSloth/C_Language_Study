/***************************************************

자기주도 C언어 프로그래밍
Page165, Assesment 8-2

This code is just for studying.
This code was written on March 29, 2022.
by IamSloth

****************************************************/


/** 문제 **
1부터 100까지의 정수 중 한 개를 입력받아 100보다 작은 배수들을 차례로 출력하다가
10의 배수가 출력되면 프로그램을 종료하도록 프로그램을 작성하시오.

입력 예) 7
출력 예) 7 14 21 28 35 42 49 56 63 70

*/


#include <stdio.h>

int main()
{
	int inputNum = 0;
	int outputNum = 0;

	while (1)
	{
		scanf("%d", &inputNum);

		if (inputNum <= 0 || inputNum > 100)
		{
			printf("안돼. 돌아가.\n");
			continue;
		}

		else
		{
			for (int i = 1; i <= 10; i++)
			{
				outputNum += inputNum;
				printf("%d ", outputNum);
				if (outputNum % 10 == 0)
				{
					break;
				}
			}

			break;
		}
	}


	return 0;
}