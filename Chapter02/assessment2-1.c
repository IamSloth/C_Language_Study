/***************************************************

자기주도 C언어 프로그래밍
Page53, Assessment 2-1

This code is just for studying.
This code was written on March 10, 2022.
by IamSloth

****************************************************/

/** 문제 **
세 개의 정수형 변수를 선언하고 각 변수에 10,20,30 을 대입한 후
그 변수를 이용하여 다음과 같이 출력하는 프로그램을 작성하시오.

출력 예) 10 + 20 = 30
*/

#include <stdio.h>

int main()
{
	int i, j, k;
	
	i = 10;
	j = 20;
	k = 30;

	printf("%d + %d = %d", i, j, k);

	return 0;
}