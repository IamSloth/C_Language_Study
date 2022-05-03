/***************************************************

자기주도 C언어 프로그래밍
Page362, selftest 17-3

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
포인터 변수 두 개를 이용하여 두 수를 입력받고 사칙 연산을 수행하여 출력하는 프로그램을 작성하시오.

입력 예) 35 6

출력 예)
35 + 6 = 41
35 - 6 = 29
35 * 6 = 210
35 / 6 = 5
*/

#include <stdio.h>

int main()
{

	int* p1 = new int;
	int* p2 = new int;

	scanf("%d %d", p1,p2);

	printf("%d + %d = %d\n", *p1, *p2, (*p1) + (*p2) );
	printf("%d - %d = %d\n", *p1, *p2, (*p1) - (*p2));
	printf("%d * %d = %d\n", *p1, *p2, (*p1) * (*p2));
	printf("%d / %d = %d\n", *p1, *p2, (*p1) / (*p2));

	delete p1;
	delete p2;
	return 0;
}


