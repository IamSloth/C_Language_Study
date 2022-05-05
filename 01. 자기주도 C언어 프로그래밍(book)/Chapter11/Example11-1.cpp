/***************************************************

자기주도 C언어 프로그래밍
Page216, Example 11-1

This code is just for studying.
This code was written on April 7, 2022.
by IamSloth

****************************************************/


/** 문제 **
사용자 정의 함수를 만들어 선을 그리는 프로그램을 작성하시오.

입력 예)

출력 예) 

================================
line 함수를 호출하였습니다.
line 함수를 다시 호출합니다.
================================

*/


#include <stdio.h>

int main()
{
	void line();

	line();
	printf("line 함수를 호출하였습니다.\n");
	printf("line 함수를 다시 호출합니다.\n");
	line();
	return 0;
}

void line()
{
	puts("================================");
}