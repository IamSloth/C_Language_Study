/***************************************************

자기주도 C언어 프로그래밍
Page69, Example 3-7

This code is just for studying.
This code was written on March 11, 2022.
by IamSloth

****************************************************/

/** 문제 **

3개의 정수 a, b, c를 선언하여 각각 0, 1, 2로 초기화 한 후
a와 b가 모두 참인지, a 또는 b가 참인지, b와 c가 모두 참인지, a가 참이 아닌지를 확인하여,
참이면 1, 거짓이면 0을 각각 출력하는 프로그램을 작성하시오


출력 예) 0 1 1 1

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int a = 0, b = 1, c = 2;

	printf("%d %d %d %d", a&&b, a||b, b&&c, !a);

	printf("\n");
	

	return 0;
}