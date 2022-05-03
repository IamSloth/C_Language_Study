/***************************************************

자기주도 C언어 프로그래밍
Page61, Example 3-3

This code is just for studying.
This code was written on March 11, 2022.
by IamSloth

****************************************************/

/** 문제 **

정수형 변수 a와 b를 만들고 각각 10으로 초기화 한 후,
다음과 같이 출력하는 프로그램을 작성하시오.

출력 예) 최초값 a = 10, b = 10

		 a++ = 10, ++b = 11
		 실행 후 a = 11, b = 11

		 a-- = 11, --b = 10
		 실행후 a = 10, b = 10

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int a = 10;
	int b = 10;

	printf("최초값 a = %d , b = %d\n\n", a, b);
	printf("a++ = %d , ++b = %d\n", a++, ++b);
	printf("실행 후 a = %d, b = %d\n\n", a, b);
	printf("a-- = %d, --b = %d\n", a--, --b);
	printf("실행 후 a = %d, b = %d", a, b);

	printf("\n");
	

	return 0;
}