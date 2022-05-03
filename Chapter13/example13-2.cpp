/***************************************************

자기주도 C언어 프로그래밍
Page267, example 13-2

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
50 이하의 자연수 N을 입력받아 재귀함수를 이용하여 1부터 N까지의 정수를
차례대로 출력하는 프로그램을 작성하시오.

입력 예) 10
출력 예) 1 2 3 4 5 6 7 8 9 10
*/

#include <stdio.h>

void output(int n)
{
	if (n < 1)
		return;

	output(n - 1);
	printf("%d ",n);
}

int main()
{
	int N = 0;
	while (1)
	{
		scanf("%d", &N);
		if (N <= 0 || N > 50)
		{
			printf("50 이하의 자연수를 다시 입력 해주세요.\n");
			continue;
		}
		break;
	}
	output(N);
	return 0;
}