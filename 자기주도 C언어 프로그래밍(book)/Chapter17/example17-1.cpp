/***************************************************

자기주도 C언어 프로그래밍
Page356, example 17-1

This code is just for studying.
This code was written on April 20, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수변수를 10으로 초기화하고 정수포인터 변수에 그 주소를 대입한 후 두 변수를 이용하여 값과 주소를
출력하는 프로그램을 작성하시오.

입력 예)

출력 예)
a = 10, &a = 1245052
*p = 10, p = 1245052

*/

#include <stdio.h>
#include <string.h>


int main()
{
	int a = 10;
	int* p = &a;

	printf("a = %d, &a = %p\n", a, &a);
	printf("*p = %d, p = %p\n", *p, p);

	return 0;
}
