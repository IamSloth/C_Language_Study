/***************************************************

자기주도 C언어 프로그래밍
Page123, Example 6-6

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
아래 예와 같이 메세지를 출력하고 숫자를 입력 받아
선택한 번호에 해당하는 메세지를 출력하는 작업을 반복하다가
4가 입력되면 메세지 출력 후 종료하는 프로그램을 작성하시오.
(1~4 이외의 수가 입력되면 "잘못 선택하였습니다." 라고 출력한다.)

입력 예) 1. 입력하기
		 2. 출력하기
		 3. 삭제하기
		 4. 끝내기
		 작업할 번호를 선택하세요. 2

		 출력하기를 선택하였습니다.

		 1. 입력하기
		 2. 출력하기
		 3. 삭제하기
		 4. 끝내기
		 작업할 번호를 선택하세요. 5

		 잘못 선택하였습니다.

		 1. 입력하기
		 2. 출력하기
		 3. 삭제하기
		 4. 끝내기
		 작업할 번호를 선택하세요. 4

		 끝내기를 선택하였습니다.

*/

#include <stdio.h>

int main()
{

	printf("\n");

	
	int i = 0;

	while (1)
	{
		printf("1. 입력하기 \n");
		printf("2. 출력하기 \n");
		printf("3. 삭제하기 \n");
		printf("4. 끝내기 \n");
		printf("작업할 번호를 선택하세요.  ");
		scanf("%d", &i);

		switch (i)
		{
			case 1:
			{
				printf("\n\n입력하기를 선택하였습니다.\n\n");
				continue;
			}

			case 2:
			{
				printf("\n\n출력하기를 선택하였습니다.\n\n");
				continue;
			}

			case 3:
			{
				printf("\n\n삭제하기를 선택하였습니다.\n\n");
				continue;
			}

			case 4:
			{
				printf("\n\n끝내기를 선택하였습니다.\n\n");
				break;
			}

			default:
			{
				printf("\n\n잘못 선택하였습니다.\n\n");
				continue;
			}
		}
		break;
	}
	
	return 0;
}