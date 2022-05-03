/***************************************************

자기주도 C언어 프로그래밍
Page198, Assesment 10-2

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
100 미만의 정수를 입력받다가 0이 입력되면 마지막에 입력된 0을 제외하고
그 때까지 입력된 정수의 십의자리 숫자가 각각 몇 개인지 작은 수부터 출력하는 프로그램을 작성하시오.
(0개인 숫자는 출력하지 않는다.)

입력 예) 10 55 3 63 85 61 85 0
출력 예) 0 : 1
		 1 : 1
		 5 : 1
		 6 : 2
		 8 : 2
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int count[10] = { 0 };

	while (1)
	{
		scanf("%d", &inputNum);
		if (inputNum >= 100 || inputNum == 0)
			break;

		count[inputNum / 10]++;
	}


	for (int i = 0; i < 10; i++)
	{
		if (count[i] > 0)
		{
			printf("%d : %d\n", i, count[i]);
		}
		
	}


	return 0;
}