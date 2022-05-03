

/***************************************************

자기주도 C언어 프로그래밍
Page140, Self Test 7-6

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/

/** 문제 **
10이하의 과목수 n을 입력 받은 후 n개 과목의 점수를 입력받아서 평균을 구하여 출력하고
평균이 80점 이상이면 "pass", 아니면 "fail"이라고 출력하는 프로그램을 작성하시오.
평균은 반올림하여 소수 첫째자리까지 출력한다.

입력 예) 4
		 75 80 85 90
출력 예) avg : 82.5
		 pass
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int classNum = 0;
	int classScore = 0;
	int classScoreSum = 0;
	float classScoreAverage = 0;

	scanf("%d", &classNum);

	for (int i = 0; i < classNum; i++)
	{
		scanf("%d", &classScore);
		classScoreSum += classScore;
	}
	classScoreAverage = (float)classScoreSum / classNum;

	printf("avg : %.1f\n", classScoreAverage);
	if (classScoreAverage >= 80)
	{
		printf("pass\n");
	}
	else
	{
		printf("fail\n");
	}

	printf("\n");

	return 0;

}