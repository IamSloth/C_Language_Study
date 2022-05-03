/***************************************************

자기주도 C언어 프로그래밍
Page192, Assesment 9-10

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
20이하의 정수 n을 입력받고 n명의 점수를 입력받아
높은 점수부터 차례대로 출력하는 프로그램을 작성하시오

입력 예) 5
		 35 10 35 100 64
출력 예) 100
		 64
		 35
		 35
		 10
*/


#include <stdio.h>

int main()
{
	printf("\n");

	
	int num = 0;
	int score[20] = { 0 };

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i; j < num; j++)
		{
			if (score[i] > score[j+1])
			{
				score[i] = score[i];
			}

			else
			{
				int temp = score[i];
				score[i] = score[j+1];
				score[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", score[i]);
	}
	
	return 0;
}