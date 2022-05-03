/***************************************************

자기주도 C언어 프로그래밍
Page190, Assesment 9-2

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
5개의 정수를 입력받은 후 첫 번째 세 번째 다섯 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.

입력 예) 15 20 33 10 9
출력 예) 57
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}

	printf("%d", num[0] + num[2] + num[4]);

	return 0;
}