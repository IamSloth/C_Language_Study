/***************************************************

자기주도 C언어 프로그래밍
Page190, Assesment 9-1

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 문자를 입력받아 마지막으로 입력받은 문자부터 첫 번째 입력받은 문자까지
차례로 출력하는 프로그램을 작성하시오.

입력 예) A E C X Y Z c b z e
출력 예) e z b c Z Y X C E A
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

	for (int j = 0; j < 10; j++)
	{
		printf("%c", ch[9 - j]);
	}

	return 0;
}