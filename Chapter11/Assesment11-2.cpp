﻿/***************************************************

자기주도 C언어 프로그래밍
Page237, Assesment 11-2

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
1부터 전달받은 수까지의 합을 출력하는 함수를 작성하고
1000 이하의 자연수를 입력받아 작성한 함수로 전달하여 출력하는 프로그램을 작성하시오.

입력 예) 100
출력 예) 5050
*/


#include <stdio.h>

int inputNum;
int sum = 0;

void input()
{
	while (1)
	{
		scanf("%d", &inputNum);
		if (inputNum > 1000 || inputNum <= 0)
		{
			printf("다시 입력하시오!!!\n\n");
			continue;
		}
		break;
	}
	
}

void calculate()
{
	for (int i = 1; i <= inputNum; i++)
	{
		sum += i;
	}
}

void output()
{
	printf("%d\n", sum);
}

int main()
{
	input();
	calculate();
	output();

	return 0;
}
