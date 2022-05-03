/***************************************************

자기주도 C언어 프로그래밍
Page71, Example 3-8

This code is just for studying.
This code was written on March 11, 2022.
by IamSloth

****************************************************/

/** 문제 **

3개의 정수 a, b, c를 선언하여 각각 0, 1, 2로 초기화 한 후
아래 소스와 같은 다양한 논리 연산 결과를 출력하는 프로그램을 작성하시오..


출력 예) 1 1 0 1

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int a = 0, b = 1, c = 2;

	printf("%d %d %d %d", (a<b) && (b<c), (a&&b) || (b&&c), (a||!c), (a!=b) && (b!=c));

	printf("\n");
	

	return 0;
}