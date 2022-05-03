/***************************************************

자기주도 C언어 프로그래밍
Page139, Example 7-6

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
5명의 성적을 입력받아서 총점과 평균을 출력하는 프로그램을 작성하시오.
(평균은 반올림하여 소수 첫째자리까지 출력한다.)

입력 예) 90 85 100 66 88
출력 예) 총점 : 429
		 평균 : 85.8

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int sum = 0;
	float average = 0;
	int inputNum = 0;

	for (int i = 1; i <= 5; i++)
	{
		scanf("%d", &inputNum);
		sum += inputNum;
	}
	average = (float)sum / 5;
	printf("총점 : %d\n", sum);
	printf("평균 : %.1f", average);

	return 0;
}