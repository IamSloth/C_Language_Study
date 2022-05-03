/***************************************************

자기주도 C언어 프로그래밍
Page223, Selftest 11-3

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수를 전달받아 다음과 같이 숫자 정사각형을 출력하는 함수를 작성하고
함수를 호출하여 입력받은 정수를 함수로 전달하여 출력하는 프로그램을 작성하시오.

입력 예) 4

출력 예) 
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

*/


#include <stdio.h>

void output(int num);

int main()
{
	int inputNum = 0;
	scanf("%d", &inputNum);

	output(inputNum);

	printf("\n");


	return 0;
}

void output(int num)
{
	int count = 1;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			printf("%2d ", count++);
		}
		printf("\n");
	}
}