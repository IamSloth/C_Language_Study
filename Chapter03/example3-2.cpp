/***************************************************

자기주도 C언어 프로그래밍
Page58, Example 3-2

This code is just for studying.
This code was written on March 11, 2022.
by IamSloth

****************************************************/

/** 문제 **

5개의 정수를 입력받아 각각의 수에 + 3, - 3, * 3, / 3, % 3 의 연산을 실행하여
그 값을 저장한 후 차례대로 출력하는 프로그램을 작성하시오.

입력 예) 5개의 수를 입력하시오. 10 5 7 9 10
출력 예) 13 2 21 3 1 

*/

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;


	printf("5개의 수를 입력하시오. ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("%d %d %d %d %d", a+3, b-3, c*3, d/3, e%3); 

	

	return 0;
}