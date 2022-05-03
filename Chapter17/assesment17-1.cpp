/***************************************************

자기주도 C언어 프로그래밍
Page373, assesment 17-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
문자 변수와 실수 변수를 각각 선언하고 그 주소를 16진수로 출력하는 프로그램을 작성하시오.

입력 예)


출력 예)
0x11111111 0x22222222
*/

#include <stdio.h>


int main()
{
	char ch;
	float f;

	printf("0x%p 0x%p", &ch, &f);
	

	
	return 0;
}


