/***************************************************

자기주도 C언어 프로그래밍
Page238, Assesment 11-5

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
3명 학생의 과목 점수를 입력받아 각 과목별 학생별 총점을 출력하는
구조화된 프로그램을 작성하시오.

입력 예) 50 80 100
		 96 88 66
		 100 85 90

출력 예) 50 80 100 230
		 96 88 66 250
		 100 85 90 275
		 246 253 256 755
*/

#include <stdio.h>

int score[4][4] = { 0 };

void input()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
}

void calculate()
{
	for (int i = 0; i < 3; i++)//세번만 더해주면됨
	{
		for (int j = 0; j < 3; j++)//세번만 더해주면됨
		{
			score[3][i] += score[j][i];
			score[i][3] += score[i][j];
			score[3][3] += score[j][i];//i,j바뀌어도 상관없음
		}
	}
}

void output()
{
	printf("\t과목1\t과목2\t과목3\t합계 \n");
	for (int i = 0; i < 4; i++)
	{
		if (i == 3)
			printf("합계  : ");
		else
		printf("학생%d : ", i + 1);
		
		for (int j = 0; j < 4; j++)
		{
			printf(" %3d\t", score[i][j]);
		}
		printf("\n");
	}

}

int main()
{
	input();
	calculate();
	output();
	
	return 0;
}
