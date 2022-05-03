/***************************************************

자기주도 C언어 프로그래밍
Page261, assesment 12-3

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
5개의 정수를 입력받아 각 정수의 절대값의 합을 출력하는 프로그램을 작성하시오

입력 예) 35 -20 10 0 55

출력 예) 120

*/

#include <stdio.h>
#include <math.h>

int main()
{
	int inputNum[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &inputNum[i]);
		sum += abs(inputNum[i]);
	}

	printf("%d\n", sum);


	

	return 0;
}

