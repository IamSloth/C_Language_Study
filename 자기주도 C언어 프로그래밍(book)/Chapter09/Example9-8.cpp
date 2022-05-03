/***************************************************

자기주도 C언어 프로그래밍
Page184, Example 9-8

This code is just for studying.
This code was written on March 31, 2022.
by IamSloth

****************************************************/

/** 문제 **
10명의 컴퓨터 점수를 입력받아 배열에 저장하고 총점과 평균을 구하여 출력하는 프로그램을 작성하시오.
(평균은 반올림하여 소수 첫째자리까지 출력한다.)

입력 예) 95 100 88 65 76 89 58 93 77 99
출력 예) 총점 = 840
		 평균 = 84.0

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int storedNum[10] = { 0 };
	int sum = 0;
	float average = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &inputNum);
		storedNum[i] = inputNum;
		sum += inputNum;
	}

	average = (float)sum / 10;
	
	printf("총점 = ");
	printf("%d\n",sum);
	printf("평균 = ");
	printf("%.1f\n", average);

	return 0;
}