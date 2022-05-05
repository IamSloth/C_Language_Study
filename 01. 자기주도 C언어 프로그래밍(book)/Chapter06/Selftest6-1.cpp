/***************************************************

자기주도 C언어 프로그래밍
Page113, Self Test 6-1

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
1 부터 15까지 차례로 출력하는 프로그램을 작성하시오.

출력 예) 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
*/

#include <stdio.h>

int main()
{
	int i = 1;

	printf("\n");

	while (i < 16)
	{
		printf("%d ", i);
		i++;
	}

	printf("\n");

	return 0;
}