/***************************************************

자기주도 C언어 프로그래밍
Page107, Self Test 5-9

This code is just for studying.
This code was written on March 15, 2022.
by IamSloth

****************************************************/

/** 문제 **
4.5 이하의 평점을 입력받아 그 값에 따라 다음과 같이 출력하는 프로그램을 작성하시오.
4.0이상 : scholarship

입력 예) 3.5
출력 예) next semester
*/

#include <stdio.h>

int main()
{

	printf("\n");

	float gpa = 0;

	
	scanf(" %f", &gpa);

	printf("\n");

	switch ((int)gpa)
	{
	case 4:
		printf("scholarship\n");
		break;

	case 3:
		printf("next semester\n");
		break;

	case 2:
		printf("seasonal semester\n");
		break;

	default:
		printf("retake\n");
		break;
	}

	return 0;
}