/***************************************************

자기주도 C언어 프로그래밍
Page119, Self Test 6-4

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수를 계속 입력받다가 100 이상의 수가 입력이 되면 마지막 입력된 수를 포함하여
합계와 평균을 출력하는 프로그램을 작성하시오.(평균은 반올림하여 소수 첫째자리까지 출력한다.)

입력 예) 1 2 3 4 5 6 7 8 9 10 100
출력 예) 155
		 14.1
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int count = 0;
	float average = 0;
	int sum = 0;

	while (1)
	{
		scanf("%d", &inputNum);

		sum += inputNum;
		count++;
		average = (float)sum / count;

		if (inputNum < 100 && inputNum >= 0)
		{
			
		}

		else if (inputNum >= 100)
		{
			printf("%d\n", sum);
			printf("%.1f\n", average);
			break;
		}

		else
		{
			printf("다시 입력하세요.\n");
			continue;
		}
	}

	printf("\n");

	return 0;
}