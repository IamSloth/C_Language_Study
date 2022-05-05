/***************************************************

자기주도 C언어 프로그래밍
Page214, Assesment 10-10

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
3행 5열의 2차원 문자배열을 선언하고 차례로 대문자를 입력받은 후
소문자로 바꾸어서 출력하는 프로그램을 작성하시오.

입력 예) A B C D E
		 F G H I J
		 K L M N O

출력 예) a b c d e
		 f g h i j
		 k l m n o
*/


#include <stdio.h>

int main()
{
	printf("\n");

	char ch[3][5] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf(" %c", &ch[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c ", ch[i][j]+'a'-'A');
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;
}