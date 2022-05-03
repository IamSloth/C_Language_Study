/***************************************************

자기주도 C언어 프로그래밍
Page175, Self Test 9-3

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 문자를 입력받아서 첫 번째, 네 번째, 일곱 번째 입력받은 문자를
차례로 출력하는 프로그램을 작성하시오.

입력 예) A B C D E F G H I J
출력 예) A D G

*/


#include <stdio.h>

int main()
{
	printf("\n");

	char ch[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		scanf(" %c", &ch[i]);
	}

	printf("%c %c %c", ch[0], ch[3], ch[6]);

	printf("\n");

	return 0;
}