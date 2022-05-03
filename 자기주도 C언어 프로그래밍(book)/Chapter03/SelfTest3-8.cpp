/***************************************************

자기주도 C언어 프로그래밍
Page72, Self Test 3-8

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
세 개의 정수를 입력받아 첫 번째 수가 가장 크면 1, 아니면 0을 출력하고
세 개의 수가 모두 같으면 1, 아니면 0을 출력하는 프로그램을 작성하시오.

입력 예) 10 9 9
출력 예) 1 0
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;

	printf("\n");

	scanf("%d %d %d", &i, &j, &k);


	printf("\n");

	printf("%d %d\n", (i > j) && (i > k), (i == j) && (j == k));

	printf("\n");



	return 0;
}