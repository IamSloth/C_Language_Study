/***************************************************

자기주도 C언어 프로그래밍
Page363, example 17-4

This code is just for studying.
This code was written on April 20, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 배열을 선언하여 {10, 20, 30}으로 초기화하고
정수포인터를 이용하여 아래와 같이 여러 가지 방법으로 출력하는 프로그램을 작성하시오.

입력 예)

출력 예)
a = 1245044, p = 1245044
10 20 30
10 20 30
10 20 30
10 20 30

*/

#include <stdio.h>
#include <string.h>


int main()
{
	int a[3] = { 10,20,30 };
	int* p = a;

	printf("a = %p, p = %p\n", a,&a[0]);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	printf("%d %d %d\n", p[0], p[1], p[2]);
	printf("%d %d %d\n", *a, *(a+1), *(a+2));
	printf("%d %d %d\n", *p, *(p + 1), *(p + 2));

	return 0;
}
