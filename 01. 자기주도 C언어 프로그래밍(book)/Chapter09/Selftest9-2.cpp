/***************************************************

자기주도 C언어 프로그래밍
Page173, Self Test 9-2

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 10개를 저장할 수 있는 배열을 만들어서 1부터 10까지를 대입하고
차례대로 출력하는 프로그램을 작성하시오.

입력 예) 
출력 예) 1 2 3 4 5 6 7 8 9 10

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		num[i] = i + 1;
		if (i == 9)
		{
			for (int j = 0; j < 10; j++)
			{
				printf("%d ", num[j]);
			}
		}
	}

	printf("\n");

	return 0;
}