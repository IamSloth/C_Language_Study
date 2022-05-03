

/***************************************************

자기주도 C언어 프로그래밍
Page165, Assesment 8-1

This code is just for studying.
This code was written on March 29, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 20개를 입력받아서 그 합과 평균을 출력하되 0이 입력되면 20개 입력이 끝나지 않더라도
그 때까지 입력된 합과 평균을 출력하는 프로그램을 작성하시오.
(0은 입력된 개수에 포함시키지 않는다. 평균은 소수부분은 버리고 정수만 출력한다.)

입력 예) 5 9 6 8 4 3 0
출력 예) 35 5

*/


#include <stdio.h>

int main()
{
	int inputNum = 0;
	int sum = 0;
	int count = 0;
	int average = 0;

	for (int i = 1; i <= 20; i++)
	{
		scanf("%d", &inputNum);

		if (inputNum == 0)
		{
			break;
		}

		else
		{
			sum += inputNum;
			count++;
		}

	}

	average = sum / count;
	printf("%d %d", sum, average);

	return 0;
}