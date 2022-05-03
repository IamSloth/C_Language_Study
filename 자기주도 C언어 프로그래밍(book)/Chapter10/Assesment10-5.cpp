/***************************************************

자기주도 C언어 프로그래밍
Page212, Assesment 10-5

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
호석이네 학교는 학년에 네 반이 있는데 각 반의 대표를 세 명씩 선발하여 제기차기 시합을 하였다.
반별로 세 명이 제기를 찬 개수를 입력받아
각 반별로 제기를 찬 개수의 합계를 출력하는 프로그램을 작성하시오.

입력 예) 1 class? 15 2 35
		 2 class? 33 1 6
		 3 class? 5 10 19
		 4 class? 1 8 55

출력 예) 1 class : 52
		 2 class : 40
		 3 class : 34
		 4 class : 64
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int score[4][3] = { 0 };
	int classScore[5] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		printf("%d class? ", i + 1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &score[i][j]);
			classScore[i + 1] += score[i][j]; // i = 0일때, 1반의 스코어
		}
	}

	printf("*****************\n");

	for (int i = 1; i <= 4; i++)
	{
		printf("%d class : %d\n", i, classScore[i]);
	}

	return 0;
}