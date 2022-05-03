/***************************************************

자기주도 C언어 프로그래밍
Page269, example 13-3

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
12 이하의 자연수 N을 입력받아 재귀함수를 이용하여
팩토리얼 N!을 구하여 출력하는 프로그램을 작성하시오.
(N팩토리얼이란 1부터 N까지의 곱을 말한다.)

입력 예) 10
출력 예) 3628800
*/

#include <stdio.h>

int factorial(int n)
{
	if (n < 1)
		return 1;
		
	return n * factorial(n - 1);	
}

int main()
{
	int N = 0;
	while (1)
	{
		scanf("%d", &N);
		if (N <= 0 || N > 12)
		{
			printf("12 이하의 자연수를 다시 입력 해주세요.\n");
			continue;
		}
		break;
	}
	printf("%d", factorial(N));
	
	return 0;
}