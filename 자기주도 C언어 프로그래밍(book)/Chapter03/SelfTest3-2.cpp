/***************************************************

자기주도 C언어 프로그래밍
Page60, Self Test 3-2

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수 2개를 입력받아서 첫 번째 수에는 100을 증가시켜 저장하고,
두 번째 수는 10으로 나눈 나머지를 저장한 후, 두 수를 차례로 출력하는 프로그램을 작성하시오.

입력 예) 20 35
출력 예) 120 5
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;

	printf("\n");

	scanf("%d %d", &i, &j);

	i = i + 100;
	j = j % 10;

	printf("\n");

	printf("%d %d\n", i, j);

	printf("\n");


	return 0;
}