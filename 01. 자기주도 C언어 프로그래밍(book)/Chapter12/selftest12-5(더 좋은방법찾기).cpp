/***************************************************
자기주도 C언어 프로그래밍
Page250, selftest 12-5

This code is just for studying.
This code was written on April 15, 2022.
by IamSloth

****************************************************/


/** 문제 **
세 개의 실수를 입력받아
가장 큰 수를 올림한 정수를 출력하고
가장 작은 수를 버림한 정수를 출력한 후
남은 수를 반올림한 정수를 출력하는 프로그램을 작성하시오.
입력되는 실수는 -1000 이상 1000 이하이다.

입력 예) 3.45 51.48 -100.1
		 
출력 예) 52 -101 3

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float num[3] = {0};
	bool isWhile = true;
	while (isWhile)
	{
		for (int i = 0; i < 3; i++)
		{
			scanf("%f", &num[i]);

			if (num[i] > 1000 || num[i] < -1000)
			{
				printf("잘못 입력했어요.\n");
				break;
			}

			else if (i == 2)
			{
				isWhile = false;
			}

		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (num[i] > num[j+1])
			{
				float temp = num[i];
				num[i] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	printf("%.0f %.0f %.0f",ceil(num[2]),floor(num[0]), floor(num[1]+0.5));
	return 0;
}