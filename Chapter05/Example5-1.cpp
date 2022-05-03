/***************************************************

자기주도 C언어 프로그래밍
Page90, Example 5-1

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
한 개의 정수를 입력 받은 후 입력받은 수를 출력하고 그 수가 10보다 크면 다음 줄에
"10 보다 큰 수를 입력하셨습니다." 라는 메시지를 출력하는 프로그램을 작성하시오.

입력 예) 15
출력 예) 15
		 10보다 큰 수를 입력하셨습니다.
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i = 0;

	scanf("%d", &i);

	printf("\n");

	printf("%d\n", i);

	if (i > 10)
	{
		printf("10보다 큰 수를 입력하셨습니다.\n");
	}


	return 0;
}