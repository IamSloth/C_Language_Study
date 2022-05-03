/***************************************************

자기주도 C언어 프로그래밍
Page190, Assesment 9-4

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
100개의 정수를 입력받을 수 있는 배열을 선언한 후 정수를 차례로 입력받다가 -1이 입력되면 입력을
중단하고 -1을 제외한 마지막 세 개의 정수를 출력하는 프로그램을 작성하시오
(입력받은 정수가 3개 미만일 경우에는 모두 출력한다.)

입력 예) 30 20 10 60 80 -1
출력 예) 10 60 80
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[100] = { 0 };
	int count = -1; // count = 0 이면 num[0]

	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		count++;
		if (num[i] == -1)
		{
			break;
		}
	}

	if (count < 3) // 정수가 3개 미만일경우
	{
		for (int i = 0; i < count; i++)
		{
			printf("%d ", num[i]);
		}
	}

	else
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%d ", num[i + count - 3]);
		}
	}




	return 0;
}