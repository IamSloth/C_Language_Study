/***************************************************

자기주도 C언어 프로그래밍
Page222, Example 11-3

This code is just for studying.
This code was written on April 7, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수를 전달받아 출력 예와 같이 ‘*'로 이루어진 직각삼각형을 출력하는 함수를 작성하고
입력받은 정수를 전달하여 출력하는 프로그램을 작성하시오.

입력 예) 5

출력 예)
⁕
⁕⁕
⁕⁕⁕
⁕⁕⁕⁕
⁕⁕⁕⁕⁕

*/


#include <stdio.h>

int main()
{
	void star(int row);

	int inputNum = 0;
	scanf("%d", &inputNum);

	star(inputNum);

	return 0;
}

void star(int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}