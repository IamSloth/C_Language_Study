/***************************************************

자기주도 C언어 프로그래밍
Page266, selftest 13-1

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
20 이하의 자연수 N을 입력받아 재귀함수를 이용해서 “recursive”를
N번 출력하는 프로그램을 작성하시오.

입력 예) 3
출력 예) recursive
		 recursive
		 recursive
*/

#include <stdio.h>

void output(int n)
{
	if (n < 1)
		return;

	printf("recursive\n");
	output(n - 1);
}

int main()
{
	int N = 0;
	while (1)
	{
		scanf("%d", &N);
		if (N <= 0 || N > 20)
		{
			printf("20 이하의 자연수를 다시 입력 해주세요.\n");
			continue;
		}
		break;
	}
	output(N);
	return 0;
}