/***************************************************

자기주도 C언어 프로그래밍
Page237, Assesment 11-3

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수를 입력받아 아래와 같은 사각형을 출력하는 프로그램을 작성하시오.
(출력하는 부분은 함수로 작성한다.)

입력 예) 3
출력 예) 1 2 3
		 2 4 6
		 3 6 9
*/


#include <stdio.h>

int input()
{
	int num = 0;
	while (1)
	{
		scanf("%d",&num);
		if (num <= 0)
		{
			printf("다시 입력하시오!!!\n\n");
			continue;
		}
		return num;
		break;
	}
}

void output(int input)
{
	int outputNum = 1;
	for (int i = 1; i <= input; i++)
	{
		for (int j = 1; j <= input; j++)
		{
			printf("%3d ", j * i);
		}
		printf("\n");
	}
}

int main()
{
	output(input());

	return 0;
}
