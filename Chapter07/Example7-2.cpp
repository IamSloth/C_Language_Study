/***************************************************

자기주도 C언어 프로그래밍
Page133, Example 7-2

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
대문자를 'A'부터 'Z'까지 차례로 출력하는 프로그램을 작성하시오

출력 예) ABCDEFGHIJKLMNOPQRSTUVWXYZ

*/


#include <stdio.h>

int main()
{
	printf("\n");

	char ch = 'A';

	for (int i = ch; i <= 'Z'; i++)
	{
		printf("%c",ch++);
	}

	printf("\n");

	return 0;
}