/***************************************************

자기주도 C언어 프로그래밍
Page171, Self Test 9-1

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
문자 10개를 저장할 수 있는 배열을 만들고 10개의 문자를 입력받아
입력받은 문자를 이어서 출력하는 프로그램을 작성하시오.

입력 예) A B C D E F G H I J 
출력 예) ABCDEFGHIJ

*/


#include <stdio.h>

int main()
{
	printf("\n");

	char ch[10];

	for (int i = 0; i < 10; i++)
	{
		scanf(" %c", &ch[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%c", ch[i]);
	}

	printf("\n");

	return 0;
}