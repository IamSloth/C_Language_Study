/***************************************************

자기주도 C언어 프로그래밍
Page126, Assesment 6-3

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
0부터 100까지의 점수를 계속 입력받다가 범위를 벗어나는 수가 입력되면
그 이전까지 입력된 자료의 합계와 평균을 출력하는 프로그램을 작성하시오.
(평균은 반올림하여 소수 첫째자리까지 출력한다.)

입력 예) 55 100 48 36 0 101
출력 예) sum : 239
		 avg : 47.8
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputScore = 0;
	int sum = 0;
	int count = 0;
	float average = 0;

	while (1)
	{
		scanf("%d", &inputScore);

		if (inputScore < 0 || inputScore > 100)
		{
			printf("sum : %d\n", sum);
			printf("avg : %.1f", average);

			break;
		}

		else
		{
			count++;
			sum += inputScore;
			average = (float)sum / count;
		}
	}

	printf("\n");

	return 0;
}