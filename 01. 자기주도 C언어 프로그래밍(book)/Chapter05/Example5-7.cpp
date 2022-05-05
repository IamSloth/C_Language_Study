/***************************************************

자기주도 C언어 프로그래밍
Page102, Example 5-7

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
아래의 메뉴에서 선택한 메뉴를 알려주는 프로그램을 작성하시오.

1. 삽입
2. 수정
3. 삭제
숫자를 선택하세요.


입력 예) 2
출력 예) 수정을 선택하셨습니다.
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i = 0;

	printf("1. 삽입\n");
	printf("2. 수정\n");
	printf("3. 삭제\n");
	printf("숫자를 선택하세요.  ");

	scanf("%d", &i);

	printf("\n");

	switch (i)
	{
		case 1:
		{
			printf("삽입을 선택하셨습니다.\n");
			break;
		}

		case 2:
		{
			printf("수정을 선택하셨습니다.\n");
			break;
		}

		case 3:
		{
			printf("삭제를 선택하셨습니다.\n");
			break;
		}

		default:
		{
			printf("잘못 입력하셨습니다.\n");
		}
	}

	return 0;
}