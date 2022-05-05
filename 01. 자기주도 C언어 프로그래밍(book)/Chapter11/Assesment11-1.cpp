/***************************************************

자기주도 C언어 프로그래밍
Page237, Assesment 11-1

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
'@'문자를 10개 출력하는 함수를 작성한 후 함수를 세 번 호출하여
아래와 같이 출력하는 프로그램을 작성하시오.

입력 예) 

출력 예)

first
@@@@@@@@@@
second
@@@@@@@@@@
third
@@@@@@@@@@

*/


#include <stdio.h>
void output();

int main()
{
	printf("first\n");
	output();

	printf("second\n");
	output();

	printf("third\n");
	output();

	return 0;
}

void output()
{
	printf("@@@@@@@@@@\n");
}