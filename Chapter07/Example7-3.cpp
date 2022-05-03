/***************************************************

자기주도 C언어 프로그래밍
Page134, Example 7-3

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
1부터 20까지의 홀수를 차례대로 출력하는 프로그램을 작성하시오.

출력 예) 1 3 5 7 9 11 13 15 17 19

*/


#include <stdio.h>

int main()
{
	printf("\n");
;

	for (int i = 1; i <= 20; i+=2)
	{
		printf("%d ",i);
	}

	printf("\n");

	return 0;
}