/***************************************************

자기주도 C언어 프로그래밍
Page146, Assesment 7-2

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 개의 정수를 입력받아 작은 수부터 큰 수까지 차례대로 출력하는 프로그램을 작성하시오.
(입력으로 주어지는 정수는 100 이하의 자연수이다.)

입력 예) 10 5
출력 예) 5 6 7 8 9 10
*/
#include <stdio.h>

int main()
{
	printf("\n");

	int smallNum = 0, bigNum = 0;
	int temp = 0;

	while (1)
	{
		scanf("%d %d", &smallNum, &bigNum);

		if ((0 < smallNum && smallNum <= 100) && (0 < bigNum && bigNum <= 100))
		{
			if (smallNum > bigNum)
			{
				temp = smallNum;
				smallNum = bigNum;
				bigNum = temp;
			}

			for (int i = smallNum; i <= bigNum; i++)
			{
				printf("%d ", i);
			}
		}
		else
		{
			printf("안돼. 돌아가. 다시 입력하시오.\n");
			continue;
		}
		break;
			
	}

	printf("\n");

	return 0;
}