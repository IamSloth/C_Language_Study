/***************************************************

자기주도 C언어 프로그래밍
Page46, Example 2-6

This code is just for studying.
This code was written on March 8, 2022.
by IamSloth

****************************************************/


#include <stdio.h>

int main()
{
	int age;

	printf("당신의 나이는 몇 살입니까? ");
	scanf_s("%d", &age);

	printf("당신의 나이는 %d살 이군요. \n", age);


	return 0;
}