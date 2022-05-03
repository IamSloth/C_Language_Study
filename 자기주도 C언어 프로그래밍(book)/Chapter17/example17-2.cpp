/***************************************************

자기주도 C언어 프로그래밍
Page358, example 17-2

This code is just for studying.
This code was written on April 20, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 변수를 선언하고 정수 포인터 변수에 주소를 대입하여
아래와 같이 두 가지 방법으로 값을 입력받아 연산을 실행하여
두 가지 방법으로 출력하는 프로그램을 작성하시오.


입력 예)

출력 예)
5 <- 입력
a = 5, *p = 5
10 <- 입력
a = 10, *p = 10
a = 15, *p = 15
a = 30, *p = 30
a = 29, *p = 29

*/

#include <stdio.h>
#include <string.h>


int main()
{
	
	int a = 0;
	scanf("%d", &a);
	int* p = &a;

	printf("a = %d, *p = %d\n", a, *p);

	scanf("%d", &a);
	printf("a = %d, *p = %d\n", a, *p);
	
	a += 5;
	printf("a = %d, *p = %d\n", a, *p);
	
	*p *= 2;
	printf("a = %d, *p = %d\n", a, *p);

	(* p)--;
	printf("a = %d, *p = %d\n", a, *p);

	return 0;
}
