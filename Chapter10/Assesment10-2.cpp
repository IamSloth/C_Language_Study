/***************************************************

자기주도 C언어 프로그래밍
Page211, Assesment 10-2

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
학생들의 점수를 입력받다가 0이 입력되면 그 때까지 입력받은 점수를 10점 단위로 구분하여
점수대별 학샐수를 출력하는 프로그램을 작성하시오. (1명도 없는 점수는 출력하지 않는다.)

입력 예) 63 80 95 100 76 64 88 0

출력 예) 100 : 1 person
		 90 : 1 person
		 80 : 2 person
		 70 : 1 person
		 60 : 2 person
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputScore = 0;
	int storedScore[11] = { 0 };
	while (1)
	{
		scanf("%d", &inputScore);
		
		if (inputScore == 0)
			break;

		storedScore[inputScore / 10] ++;
	}

	for (int i = 10; i >= 1; i--)
	{
		if (storedScore[i] > 0)
		{
			printf("%d : %d person\n", i * 10, storedScore[i]);
		}
	}

	return 0;
}