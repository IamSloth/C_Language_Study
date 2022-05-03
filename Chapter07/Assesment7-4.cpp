/***************************************************

자기주도 C언어 프로그래밍
Page146, Assesment 7-4

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
100 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 평균을 출력하는 프로그램을 작성하시오.
(평균은 반올림하여 소수 둘째자리까지 출력하도록 한다.)

입력 예) 3
		 99 65 30
출력 예) 64.67
*/
#include <stdio.h>

int main()
{
	printf("\n");

	int inputCount = 0;
	int inputNum = 0;
	int sum = 0;
	float average = 0;

	while (1)
	{
		scanf("%d", &inputCount);

		if (0 < inputCount && inputCount <= 100)
		{
			for (int i = 0; i < inputCount; i++)
			{
				scanf("%d", &inputNum);
				sum += inputNum;
			}

			average = (float)sum / inputCount;
			printf("%.2f", average);
		}

		else
		{
			printf("안돼. 돌아가. 다시입력하시오.\n\n");
			continue;
		}

		break;
	}
	printf("\n");

	return 0;
}