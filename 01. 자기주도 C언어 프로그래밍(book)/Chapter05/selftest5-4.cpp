/***************************************************

자기주도 C언어 프로그래밍
Page97, Self Test 5-4

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
복싱체급은 몸무게가 50.80kg 이하를 Flyweight, 61.23kg 이하 Lightweight,
72.57kg 이하 Middleweight, 88.45kg 이하 Cruiserweight, 그 이상을 Heavyweight라고 하자.
몸무게를 입력받아 체급을 출력하는 프로그램을 작성하시오.

입력 예) 87.3
출력 예) Cruiserweight
*/

#include <stdio.h>

int main()
{

	printf("\n");

	float weight = 0;

	
	scanf("%f", &weight);

	printf("\n");

	if (weight <= 50.80)
	{
		printf("Flyweight\n");
	}

	else if (weight > 50.80 && weight <= 61.23)
	{
		printf("Lightweight\n");
	}

	else if (weight > 61.23 && weight <= 72.57)
	{
		printf("Middleweight\n");
	}

	else if (weight > 72.57 && weight <= 88.45)
	{
		printf("Cruiserweight\n");
	}

	else
	{
		printf("Heavyweight\n");
	}

	


	return 0;
}