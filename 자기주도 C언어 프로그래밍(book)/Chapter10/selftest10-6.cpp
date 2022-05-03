/***************************************************

자기주도 C언어 프로그래밍
Page208, Selftest 10-6

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
5명 학생의 국어 영어 수학 과학 4과목의 점수를 입력 받아서 각 개인별로 평균이 80 이상이면
"pass" 그렇지 않으면 "fail"을 출력하고 합격한 사람의 수를 출력하는 프로그램을 작성하시오.

입력 예) 85 67 95 65
		 80 95 86 56
		 100 98 67 86
		 95 76 84 65
		 67 86 90 76

출력 예) fail
		 fail
		 pass
		 pass
		 fail
		 Successful : 2
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int score[5][4] = { 0 };
	int studnet[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			studnet[i] += score[i][j];
		}
		studnet[i] /= 4;
	}

	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (studnet[i] >= 80)
		{
			printf("pass\n");
			count++;
		}

		else
			printf("fail\n");
	}

	printf("Successful : %d", count);






	

	return 0;
}