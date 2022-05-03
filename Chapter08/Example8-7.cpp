/***************************************************

자기주도 C언어 프로그래밍
Page163, Example 8-7

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
for 문을 이용하여 다음과 같이 출력하는 프로그램을 만드시오.

출력 예)

a 1 2 3 4
b c 5 6 7
d e f 8 9
g h i j 10

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int outputNum = 1;
	char outputChar = 'a';

	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%c ",outputChar++);
		}

		for (int j = 1; j <= 5-i; j++)
		{
			printf("%d ", outputNum++);
		}

		printf("\n");
	}

	return 0;
}