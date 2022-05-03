/***************************************************

자기주도 C언어 프로그래밍
Page176, Self Test 9-4

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
100개의 정수를 저장할 수 있는 배열을 선언하고 정수를 차례로 입력받다가 0이 입력되면 0을 제외하고
그 때까지 입력된 정수를 가장 나중에 입력된 정수부터 차례대로 출력하는 프로그램을 작성하시오.

입력 예) 3 5 10 55 0
출력 예) 55 10 5 3

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[100];

	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);

		if (num[i] == 0)
		{
			for (int j = i - 1; j > 0; j--)
			{
				printf("%d ", num[j]);
			}
			break;
		}

	}
	printf("\n");

	return 0;
}