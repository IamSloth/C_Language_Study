/***************************************************

자기주도 C언어 프로그래밍
Page95, Self Test 5-3

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
나이를 입력받아 20살 이상이면 "adult" 라고 출력하고 그렇지 않으면 몇 년후에 성인이 되는지를
" O years later" 라는 메세지를 출력하는 프로그램을 작성하시오.

입력 예) 18
출력 예) 2 years later
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int age = 0;

	scanf("%d", &age);

	printf("\n");

	if (age > 20)
	{
		printf("adult\n");
	}

	else
	{
		printf("%d years later\n",20-18);
	}
	


	return 0;
}