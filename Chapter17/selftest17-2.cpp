/***************************************************

자기주도 C언어 프로그래밍
Page360, selftest 17-2

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수형 포인터를 이용하여 값을 입력받고 입력받은 값을 10으로 나눈 몫과 나머지를
출력하는 프로그램을 작성하시오.

입력 예) 123

출력 예)
12...3

*/

#include <stdio.h>

int main()
{

	int* p = new int;

	scanf("%d", p);

	printf("%d ... %d", *p/10, *p%10);
	delete p;
	return 0;
}


