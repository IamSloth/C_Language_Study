/***************************************************

자기주도 C언어 프로그래밍
Page67, Example 3-6

This code is just for studying.
This code was written on March 11, 2022.
by IamSloth

****************************************************/

/** 문제 **

3개의 정수 a, b, c를 입력받아서
a가 b보다 큰지, b가 c보다 크거나 같은지, a가 b보다 작거나 같은지, b가 c보다 작은지를 비교하여
참이면 1, 거짓이면 0을 각각 출력하는 프로그램을 작성하시오.

입력 예) 1 2 2 
출력 예) 0 1 1 0

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d %d %d %d", a>b, b>=c, a<=b, b<c);

	printf("\n");
	

	return 0;
}