/***************************************************

자기주도 C언어 프로그래밍
Page172, Example 9-2

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
26개의 문자배열을 선언하고 'A'부터 'Z'까지의 대문자를 차례로 대입 시킨 후
배열의 마지막부터 처음까지 각 문자를 출력하는 프로그램을 작성하시오.

입력 예) 
출력 예) Z Y X W V U T S R Q P O N M L K J I H G F E D C B A


*/


#include <stdio.h>

int main()
{
	printf("\n");

	char alpabet[26];
	int i = 25;
	for (char ch = 'Z'; ch >= 'A'; ch--)
	{
		alpabet[i] = ch;
		printf("%c", alpabet[i]);
		i--;
		
	}
	


	return 0;
}