/***************************************************

자기주도 C언어 프로그래밍
Page191, Assesment 9-8

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
100개 이하의 정수를 입력받다가 0이 입력되면 종료하고 그 때까지 입력된 정수 중
5의 배수의 개수와 합계, 평균을 출력하는 프로그램을 작성하시오.
평균은 소수점 이하 1자리까지 출력한다.

입력 예) 35 10 23 100 64 51 5 0
출력 예) Multiples of 5 : 4
		 sum : 150
		 avg : 37.5
*/
#include <stdio.h>

int main()
{
	printf("\n");

	int num[100];
	int x5Count = 0;
	int sum = 0;
	float average = 0;

	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		
		if (num[i] == 0)
		{
			break;
		}
		
		else if (num[i] % 5 == 0)
		{
			x5Count++;
			sum += num[i];
		}
	}

	average = (float)sum / x5Count;

	printf("Multiples of 5: %d\n", x5Count);
	printf("sum : %d\n", sum);
	printf("avg : %.1f\n", average);
	
	return 0;

	
}