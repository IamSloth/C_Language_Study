/***************************************************

자기주도 C언어 프로그래밍
Page280, assesment 13-4

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
첫 번째는 1, 두 번째는 2, 세 번째 이후는 앞의 두 수의 곱을 100으로 나눈 나머지로 이루어진 수열이 있다.
100이하의 자연수 N을 입력받아 재귀함수를 이용하여 N번째 값을 출력하는 프로그램을 작성하시오.

입력 예) 8

출력 예) 92

*/

#include <stdio.h>

int function(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	return (function(n - 1) * function(n - 2)) % 100;
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", function(N));
	return 0;
}

