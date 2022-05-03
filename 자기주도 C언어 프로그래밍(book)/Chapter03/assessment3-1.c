/***************************************************

자기주도 C언어 프로그래밍
Page73, Assesment 3-1

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
국어, 영어, 수학, 컴퓨터 과목의 점수를 입력받아서 총점과 평균을 구하는 프로그램을 작성하시오.
(단, 평균의 소수점 이하는 버림한다.)

입력 예) 70 95 63 100
출력 예) sum 328
		 avg 82
*/

#include <stdio.h>

int main()
{
	int korean = 0;
	int english = 0;
	int math = 0;
	int computer = 0;

	printf("\n");

	scanf("%d %d %d %d", &korean, &english, &math, &computer);

	int sum = korean + english + math + computer;
	int avg = sum / 4;

	printf("\n");

	printf("sum %d\n", sum);
	printf("avg %d\n", avg);

	printf("\n");



	return 0;
}