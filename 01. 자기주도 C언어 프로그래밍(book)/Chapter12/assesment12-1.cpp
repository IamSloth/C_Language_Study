/***************************************************

자기주도 C언어 프로그래밍
Page261, assesment 12-1

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 N을 입력받고 다시 N개의 정수를 입력받아 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
입력과 출력 정렬은 모두 함수를 이용할 것
(1 <= N <= 15)

입력 예) 5
		 12 35 1 48 9

출력 예) 48 35 12 9 1

*/

#include <stdio.h>

void input(int input, int num[])
{
	for (int i = 0; i < input; i++)
	{
		scanf("%d", &num[i]);
	}
}

void output(int input, int num[])
{
	for (int i = 0; i < input - 1; i++)
	{
		for (int j = i; j < input; j++)
		{
			if (num[i] < num[j+1])
			{
				int temp = num[i];
				num[i] = num[j+1];
				num[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < input; i++)
	{
		printf("%d ", num[i]);
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	int outputNum[15] = { 0 };
	input(n,outputNum);
	output(n,outputNum);
	return 0;
}
