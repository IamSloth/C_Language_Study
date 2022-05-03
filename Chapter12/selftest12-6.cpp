/***************************************************
자기주도 C언어 프로그래밍
Page253, example 12-6

This code is just for studying.
This code was written on April 17, 2022.
by IamSloth

****************************************************/


/** 문제 **
main 함수 내에는 숫자를 사용하지 말고 1, 2, 3 세 개의 숫자를 조합하여
가능한 한 모든 합을 출력하는 프로그램을 작성하시오

입력 예) 
		 
출력 예) 1 + 1 = 2
		 1 + 2 = 3
		 1 + 3 = 4
		 2 + 1 = 3
		 2 + 2 = 4
		 2 + 3 = 5
		 3 + 1 = 4
		 3 + 2 = 5
		 3 + 3 = 6

*/

#include <stdio.h>

#define one 1
#define two 2
#define three 3

int main()
{
	for (int i = one; i <= three; i++)
	{
		for (int j = one; j <= three; j++)
		{
			printf("%d + %d = %d\n", i, j, i + j);
		}
	}
	return 0;
}