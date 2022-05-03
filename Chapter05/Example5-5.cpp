/***************************************************

자기주도 C언어 프로그래밍
Page98, Example 5-5

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
주사위를 두 번 던져서 나온 수를 입력받아 두 수가 모두 4 이상이면 "이겼습니다."
한 개만 4 이상이면 " 비겼습니다." 모두 4 미만이면 "졌습니다." 라고 출력하는 프로그램을 작성하시오.

입력 예) 주사위를 던진 결과를 입력하세요. 3 4
출력 예) 비겼습니다.
*/

#include <stdio.h>

int main()
{

	printf("\n");

	printf("주사위를 던진 결과를 입력하세요. ");
	int num1, num2 = 0;

	scanf("%d %d", &num1, &num2);

	printf("\n");

	if (num1 >= 4 && num2 >= 4)
	{
		printf("이겼습니다.\n");
	}

	else if (num1 >= 4 || num2 >= 4)
	{
		printf("비겼습니다.\n");
	}

	else
	{
		printf("졌습니다.\n");
	}

	return 0;
}