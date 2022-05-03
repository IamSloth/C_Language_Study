/***************************************************

자기주도 C언어 프로그래밍
Page226, Example 11-5

This code is just for studying.
This code was written on April 7, 2022.
by IamSloth

****************************************************/


/** 문제 **
평균을 구하는 함수를 작성한 후 세과목의 점수를 입력받아 평균을 구하여
소수 둘째자리까지 반올림하여 출력하는 프로그램을 작성하시오.

입력 예) 세과목의 점수를 입력하세요. 80 65 95

출력 예) 평균 : 80.00

*/


#include <stdio.h>

float averageNum(int num1, int num2, int num3);

int main()
{
	int inputNum[3];
	printf("세과목의 점수를 입력하세요. ");
	scanf("%d %d %d", &inputNum[0], &inputNum[1], &inputNum[2]);

	printf("평균 : %.2f\n", averageNum(inputNum[0], inputNum[1], inputNum[2]));

	return 0;
}

float averageNum(int num1, int num2, int num3)
{
	float f = (num1 + num2 + num3) / 3;
	return f;
}