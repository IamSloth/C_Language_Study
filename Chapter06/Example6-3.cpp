/***************************************************

자기주도 C언어 프로그래밍
Page116, Example 6-3

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
점수를 입력받아 80점 이상이면 합격메세지를
그렇지 않으면 불합격 메세지를 출력하는 작업을 반복하다가
0~100점 이외의 점수가 입력되면 종료하는 프로그램을 작성하시오.

출력 예) 점수를 입력하세요. 50
		 죄송합니다. 불합격입니다.
		 점수를 입력하세요. 95
		 축하합니다. 합격입니다.
		 점수를 입력하세요. 101
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int score = 0;

	while (1)
	{
		printf("점수를 입력하세요.  ");
		scanf("%d", &score);

		if (score < 0 || score > 100)
		{
			break;
		}

		if (score >= 80)
		{
			printf("축하합니다. 합격입니다.\n\n");
		}

		else
		{
			printf("죄송합니다. 불합격입니다.\n\n");
		}
	}

	printf("\n");

	return 0;
}