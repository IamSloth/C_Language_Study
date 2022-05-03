/***************************************************

자기주도 C언어 프로그래밍
Page112, Example 6-1

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
알파벳 'A'부터 'Z'까지 출력하는 프로그램을 작성하시오.

출력 예) ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/

#include <stdio.h>

int main()
{

	printf("\n");

	char alpha = 'A';

	while (alpha <= 'Z')
	{
		printf("%c", alpha++);
	}

	printf("\n");

	return 0;
}