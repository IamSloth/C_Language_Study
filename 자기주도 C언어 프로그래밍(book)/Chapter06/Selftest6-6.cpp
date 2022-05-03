/***************************************************

자기주도 C언어 프로그래밍
Page125, Self Test 6-6

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
아래와 같이 나라 이름을 출력하고 숫자를 입력받아 해당하는 나라의 수도를 출력하는 작업을 반복하다가
해당하는 번호 이외의 숫자가 입력되면 "none" 이라고 출력한 후 종료하는 프로그램을 작성하시오.

예) 1. Korea
	2. USA
	3. Japan
	4. China
	number? 1

	Seoul

	1. Korea
	2. USA
	3. Japan
	4. China
	number? 5

	none
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;

	while (1)
	{
		printf("\n");
		printf("1. Korea\n");
		printf("2. USA\n");
		printf("3. Japan\n");
		printf("4. China\n");
		printf("number? ");
		scanf("%d", &inputNum);

		

		switch (inputNum)
		{
			case 1:
				printf("\nSeoul\n");
				break;

			case 2:
				printf("\nWashington\n");
				break;

			case 3:
				printf("\nTokyo\n");
				break;

			case 4:
				printf("\nBeijing\n");
				break;

			default:
				printf("\nnone\n");
				break;
		}

		if ((inputNum <= 0 || inputNum >= 5))
		{
			break;
		}
	}

	printf("\n");

	return 0;
}