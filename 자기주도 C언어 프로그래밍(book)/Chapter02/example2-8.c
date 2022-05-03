/***************************************************

자기주도 C언어 프로그래밍
Page49, Example 2-8

This code is just for studying.
This code was written on March 8, 2022.
by IamSloth

****************************************************/


#include <stdio.h>

int main()
{
	int height;
	double weight;
	char name;

	printf("키를 입력하세요. ");
	scanf_s("%d", &height);

	printf("몸무게를 입력하세요. ");
	scanf_s("%lf", &weight);

	printf("이름을 입력하세요. ");
	scanf_s(" %c", &name);

	printf("키 = %d \n", height);
	printf("몸무게 = %.1f \n", weight);
	printf("이름 = %c \n", name);


	return 0;
}