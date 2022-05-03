/***************************************************

자기주도 C언어 프로그래밍
Page127, Assesment 6-5

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
삼각형의 밑변의 길이와 높이를 입력받아 넓이를 출력하고,
"Continue?" 에서 'Y' 나 'y' 를 입력하면 작업을 반복하고
다른 문자를 입력하면 종료하는 프로그램을 작성하시오.
(넓이는 반올림하여 소수 첫째자리까지 출력한다.)

예) Base = 11
	Height = 5
	Triangle width = 27.5
	Continue? Y
	Base = 10
	Height = 10
	Triangle width = 50.0
	Continue? N

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputBase = 0;
	int inputHeight = 0;	
	float triWidth = 0;
	char answer = 0;
	
	while (1)
	{
		printf("Base = ");
		scanf("%d", &inputBase);
		printf("Height = ");
		scanf("%d", &inputHeight);

		triWidth = ((float)inputBase * inputHeight) / 2;

		printf("Triangle width = %.1f\n",triWidth);
		printf("Continue? ");
		scanf(" %c", &answer);

		if (answer == 'Y' || answer == 'y')
		{
			continue;
		}

		else
		{
			break;
		}
	}

	printf("\n");

	return 0;
}