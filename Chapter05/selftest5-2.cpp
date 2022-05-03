/***************************************************

자기주도 C언어 프로그래밍
Page93, Self Test 5-2

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
"몸무게 + 100 - 키"를 비만수치 공식이라고 하자.
키와 몸무게를 입력받아 첫 번째 줄에 비만수치를 출력하고,
비만수치가 0보다 크면 다음 줄에 비만("Obesity") 이라는 메시지를 출력하는 프로그램을 작성하시오.
출력형식은 아래 출력 예를 참고하세요

입력 예) 155 60
출력 예) 5
		 Obesity
*/

#include <stdio.h>

int main()
{

	printf("\n");

	int height = 0;
	int weight = 0;
	int bmi = 0;

	scanf("%d %d", &height, &weight);

	printf("\n");

	bmi = weight + 100 - height;
	printf("%d\n", bmi);

	if (bmi > 0)
	{
		printf("Obesity\n");
	}
	


	return 0;
}