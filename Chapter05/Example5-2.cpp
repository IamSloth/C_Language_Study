/***************************************************

자기주도 C언어 프로그래밍
Page92, Example 5-2

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수 2개를 입력받아서 큰 수와 작은 수를 차례로 출력하는 프로그램을 작성하시오.

입력 예) 2 9
출력 예) 입력 받은 수 중 큰 수는 9이고 작은 수는 2입니다.
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i, j, k = 0;

	scanf("%d %d", &i, &j);

	printf("\n");

	if (j > i)
	{
		k = i;
		i = j;
		j = k;
	}

	printf("입력 받은 수 중 큰 수는 %d이고 작은수는 %d입니다.\n", i, j);


	return 0;
}