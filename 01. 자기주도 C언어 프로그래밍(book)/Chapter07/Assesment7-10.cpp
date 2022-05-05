/***************************************************

자기주도 C언어 프로그래밍
Page147, Assesment 7-10

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
2부터 9까지의 정수 a와 b를 입력받아 a단부터 b단까지의 구구단을 차례대로 출력하는 프로그램을 작성하시오.
구구단 사이의 공백은 3칸이다.

입력 예) 5 3
출력 예) 5 * 1 = 5    4 * 1 = 4    3 * 1 = 3
		 5 * 2 = 10   4 * 2 = 8    3 * 2 = 6
		 5 * 3 = 15   4 * 3 = 12   3 * 3 = 9
		 5 * 4 = 20   4 * 4 = 16   3 * 4 = 12
		 5 * 5 = 25   4 * 5 = 20   3 * 5 = 15
		 5 * 6 = 30   4 * 6 = 24   3 * 6 = 18
		 5 * 7 = 35   4 * 7 = 28   3 * 7 = 21
		 5 * 8 = 40   4 * 8 = 32   3 * 8 = 24
		 5 * 9 = 45   4 * 9 = 36   3 * 9 = 27

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum1 = 0;
	int inputNum2 = 0;

	while (1)
	{
		scanf("%d%d", &inputNum1, &inputNum2);

		if ( (2 <= inputNum1 && inputNum1 <= 9) && (2 <= inputNum2 && inputNum2 <= 9) )
		{
			for (int i = 1; i <= 9; i++)
			{
				if (inputNum1 > inputNum2)
				{
					for (int j = inputNum1; j >= inputNum2; j--)
					{
						printf("%d * %d = %2d   ", j, i, j * i);
					}
					printf("\n");
				}

				else if (inputNum1 < inputNum2)
				{
					for (int j = inputNum1; j <= inputNum2; j++)
					{
						printf("%d * %d = %2d   ", j, i, j * i);
					}
					printf("\n");
				}

				else
				{
					for (int j = 1; j <= inputNum1; j++)
					{
						printf("%d * %d = %2d   ", j, i, j * i);
					}
					printf("\n");
				}
			}
		}
		else
		{
			printf("안돼. 돌아가. 다시 입력하세요.\n");
			continue;
		}
		break;
	}
	
	
	printf("\n");

	return 0;
}