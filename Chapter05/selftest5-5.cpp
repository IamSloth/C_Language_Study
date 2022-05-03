/***************************************************

자기주도 C언어 프로그래밍
Page97, Self Test 5-5

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 개의 실수를 입력받아 모두 4.0 이상이면 "A" 모두 3.0 이상이면 "B"
아니면 "C" 라고 출력하는 프로그램을 작성하시오.

입력 예) 4.3 3.5
출력 예) B
*/

#include <stdio.h>

int main()
{

	printf("\n");

	float gpa1 = 0;
	float gpa2 = 0;

	
	scanf("%f %f", &gpa1, &gpa2);

	printf("\n");

	if (gpa1 >= 4.0 && gpa2 >= 4.0)
	{
		printf("A\n");
	}

	else if (gpa1 >= 3.0 && gpa2 >= 3.0)
	{
		printf("B\n");
	}

	else
	{
		printf("C\n");
	}

	


	return 0;
}