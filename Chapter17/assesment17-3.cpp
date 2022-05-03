/***************************************************

자기주도 C언어 프로그래밍
Page373, assesment 17-3

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
세 개의 포인터 p1, p2, p3 변수를 선언하고 각각 메모리 공간을 확보한 후,
p1 과 p2 이용하여 두 개의 정수를 입력받고 p3를 이용하여 입력받은 두 수의 차의 절대값을 저장한 후
출력하는 프로그램을 작성하시오

입력 예)
15 25

출력 예)
10
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int* p1 = new int;
	int* p2 = new int;
	int* p3 = new int;

	scanf("%d %d", p1, p2);

	*p3 = abs((*p1) - (*p2));

	printf("%d\n", *p3);

	return 0;
}


