/***************************************************

자기주도 C언어 프로그래밍
Page186, Example 9-9

This code is just for studying.
This code was written on March 31, 2022.
by IamSloth

****************************************************/


/** 문제 **
5개의 정수를 {95, 75, 85, 100, 50}로 초기화 하고
오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.

입력 예) 
출력 예) 50 75 85 95 100

*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[5] = {95, 75, 85, 100, 50};
	int outputNum[5] = { 0 };
	int smallNum = 9999999;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (smallNum > num[j])
			{
				smallNum = num[j];
			}
		}

		for (int k = 0; k < 5; k++)
		{
			if (smallNum == num[k])
			{
				num[k] = 9999999;
			}
		}

		outputNum[i] = smallNum;
		smallNum = 9999999;
		
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", outputNum[i]);
	}
	
	printf("\n");

	return 0;
}