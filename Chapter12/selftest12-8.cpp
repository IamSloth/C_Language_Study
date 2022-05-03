/***************************************************

자기주도 C언어 프로그래밍
Page259, selftest 12-8

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 두 개를 입력받아서 매크로 함수를 작성하여 두 수의 차를 제곱한 값과 합을 세제곱한 값을
각각 출력 하는 프로그램을 작성하시오.
출력시 거듭제곱은 ^로 표시하기로 한다


입력 예) 5 10

출력 예) (10 + 10) * (20 - 5) = 300
*/

#include <stdio.h>
#include <math.h>
#define function1(x,y) pow(abs(a-b),2)
#define function2(x,y) pow((a+b),3)


int main()
{
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	c = function1(a,b);
	d = function2(a, b);
	printf("(%d - %d) ^ 2 = %d\n", a, b, c);
	printf("(%d + %d) ^ 3 = %d\n", a, b, d);
	return 0;
}
