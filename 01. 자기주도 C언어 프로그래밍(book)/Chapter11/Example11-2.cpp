/***************************************************

자기주도 C언어 프로그래밍
Page216, Example 11-1

This code is just for studying.
This code was written on April 7, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수를 입력 받아 10 큰 수와 10 작은 수를 출력하는 프로그램을 작성하시오

입력 예) 50

출력 예) 10큰수 : 60
		 10작은수 : 40

================================
line 함수를 호출하였습니다.
line 함수를 다시 호출합니다.
================================

*/


#include <stdio.h>

int main()
{
	int addTen(int num);
	int minusTen(int num);

	int inputNum = 0;
	scanf("%d", &inputNum);

	printf("10큰수 : %d\n", addTen(inputNum));
	printf("10작은수 : %d\n", minusTen(inputNum));
	return 0;
}

int addTen(int num)
{
	return num + 10;
}
int minusTen(int num)
{
	return num - 10;
}