/***************************************************

자기주도 C언어 프로그래밍
Page63, Example 3-4

This code is just for studying.
This code was written on March 11, 2022.
by IamSloth

****************************************************/

/** 문제 **

정수형 변수 a와 b를 입력받아서
a는 전치 증가 연산자를 사용하고, b는 후치 감소 연산자를 사용하여
두 수의 합을 c에 저장한 후 각각을 출력하는 프로그램을 작성하시오.

입력 예) 5 6
출력 예) a = 6, b = 5, c = 12

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	int c = ++a + b--;
	
	printf("a = %d, b = %d, c = %d", a, b, c);

	printf("\n");
	

	return 0;
}