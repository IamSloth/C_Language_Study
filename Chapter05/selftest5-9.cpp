/***************************************************

자기주도 C언어 프로그래밍
Page107, Self Test 5-9

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
3개의 정수를 입력받아 조건연산자를 이용하여 입력받은 수들 중 최소값을 출력하는 프로그램을 작성하시오.

입력 예) 18 -5 10
출력 예) -5
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int i, j, k;
	i = 0;
	j = 0;
	k = 0;

	
	scanf("%d %d %d", &i, &j, &k);

	printf("\n");

	int min = 0;
	
	min = (i > j) ? j : i;
	min = (min > k) ? k : min;

	printf("%d\n", min);

	return 0;
}