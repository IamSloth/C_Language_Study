/***************************************************

자기주도 C언어 프로그래밍
Page177, Example 9-5

This code is just for studying.
This code was written on March 31, 2022.
by IamSloth

****************************************************/


/** 문제 **
연도와 월을 입력받아 해당 월의 날 수를 출력하다가
월이 0이면 종료하는 프로그램을 작성하시오.
(월이 잘못 입력되면 "잘못 입력하였습니다."를 출력한다.)

입력 예) 
출력 예)
YEAR = 2000
MONTH = 2
입력하신 달의 날 수는 29 일입니다.

YEAR = 2010
MONTH = 13
잘못 입력하였습니다.

YEAR = 0
MONTH = 0

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputYear = 0;
	int inputMonth = 0;
	int outputFebDay = 0;

	while (1)
	{
		printf("YEAR = ");
		scanf("%d", &inputYear);
		printf("MONTH = ");
		scanf("%d", &inputMonth);

		if (inputMonth < 0 || inputMonth > 12)
		{
			printf("잘못 입력하셨습니다.\n\n");
			continue;
		}

		else if (inputMonth == 0)
		{
			break;
		}

		else
		{
			if (inputYear % 4 == 0) // 4로 떨어지면 윤년
			{
				outputFebDay = 29;

				if (inputYear % 100 == 0) // 4로 떨어지는데 100으로 떨어지면 평년
				{
					outputFebDay = 28;

					if (inputYear % 400 == 0) // 4로 떨어지면서 100으로 떨어지면서 400으로 떨어지면 윤년
					{
						outputFebDay = 29;
					}
				}
			}

			else
			{
				outputFebDay = 28;
			}

			switch (inputMonth)
			{
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				{
					printf("입력하신 달의 날 수는 31일입니다.\n\n");
					break;
				}

				case 4: case 6: case 9: case 11:
				{
					printf("입력하신 달의 날 수는 30일입니다.\n\n");
					break;
				}

				case 2:
				{
					printf("입력하신 달의 날 수는 %d일입니다.\n\n", outputFebDay);
					break;
				}

			}
						
		}
	}

	return 0;
}