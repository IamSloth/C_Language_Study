/***************************************************

자기주도 C언어 프로그래밍
Page360, example 17-3

This code is just for studying.
This code was written on April 20, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수형 포인터 변수 두 개를 선언하여 값을 입력받고 합을 출력하는 프로그램을 작성하시오.


입력 예)
10 20

출력 예)
10 + 20 = 30

*/

#include <stdio.h>
#include <string.h>


int main()
{
	
	int* p1 = new int;
	int* p2 = new int;

	scanf("%d %d", p1, p2);

	printf("%d + %d = %d", *p1, *p2, (*p1) + (*p2));

	delete p1;
	delete p2;
	
	return 0;
}
