/***************************************************

자기주도 C언어 프로그래밍
Page205, Example 10-6

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** 문제 **
학생 3명의 국어, 영어, 수학 점수를 입력받아 학생별 총점과 과목별 합계를
아래와 같이 출력하는 프로그램을 작성하시오.

입력 예) 1번째 학생의 점수 95 100 88
		 2번째 학생의 점수 85 60 93
		 3번째 학생의 점수 66 99 88

출력 예)	국어 영어 수학 총점
		1번  95  100   88	283
		2번  85   60   93   238
		3번  66   99   88   253
	   합계  246  259  269  774
*/

#include <stdio.h>

int main()
{
	int score[4][4] = { {0} };

	for (int i = 0; i < 3; i++)
	{	
		printf("%d번째 학생의 점수 ", i+1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			score[i][3] += score[i][j];
		}

		for (int j = 0; j < 3; j++)
		{
			score[3][i] += score[j][i];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		score[3][3] += score[3][i];
	}

	printf("\t국어\t영어\t수학\t총점\n");
	

	for (int i = 0; i < 4; i++)
	{
		
		if (i == 3)
		{
			printf("합계\t");
		}

		else
		{
			printf("%d번\t", i + 1);
		}
		for (int j = 0; j < 4; j++)
		{
			printf("%3d\t", score[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}