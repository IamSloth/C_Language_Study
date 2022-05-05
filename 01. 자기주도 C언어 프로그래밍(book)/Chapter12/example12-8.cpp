/***************************************************

자기주도 C언어 프로그래밍
Page259, example 12-8

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 개의 정수 a,b 를 입력받아 a보다 10 큰 수와 b보다 5 작은 수의 곱을 구하여
출력하는 프로그램을 작성하시오.


입력 예) 10 20

출력 예) (10 + 10) * (20 - 5) = 300
*/

#include <stdio.h>
#define MULTI(x,y) (x) * (y)


int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = MULTI(a + 10, b - 5);
	printf("(%d + 10) * (%d - 5) = %d\n", a, b, c);
	return 0;
}
