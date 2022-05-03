/***************************************************

자기주도 C언어 프로그래밍
Page191, Assesment 9-7

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
세 자리 이하의 정수 100개를 차례로 입력 받다가 999 가 입력되면 프로그램을 종료하고
999를 제외한 그 때까지 입력된 최대값과 최소값을 출력하는 프로그램을 작성하시오.

입력 예) 45 19 123 58 10 -55 16 -1 999
출력 예) max : 123
		 min : -55

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[100];
	int max = -1000;
	int min = 1000;
	int count = -1;

	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		count++; // count 0일때 num 0, 
		if (num[i] == 999)
		{
			break;
		}
	}
	
	for (int i = 0; i < count; i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}

		if (min > num[i])
		{
			min = num[i];
		}
	}

	printf("%d %d",max,min);
	
	return 0;

	
}