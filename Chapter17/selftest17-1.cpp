/***************************************************

자기주도 C언어 프로그래밍
Page358, selftest 17-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수형 변수와 포인터 변수를 선언하고 정수를 입력받아 포인터 변수를 이용하여 정수형 변수의 메모리
주소와 값을 출력하는 프로그램을 작성하시오.

입력 예) 20

출력 예)
0x1111 20

*/

#include <stdio.h>

int main()
{

	int i = 0;
	int* p = &i;

	scanf("%d", p);

	printf("0x%p %d", p, i);
	return 0;
}


