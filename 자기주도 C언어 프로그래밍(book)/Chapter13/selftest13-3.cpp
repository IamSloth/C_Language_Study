/***************************************************

자기주도 C언어 프로그래밍
Page270, selftest 13-3

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
100 이하의 자연수 N을 입력받아 재귀함수를 이용하여
1부터 N까지의 합을 구하는 프로그램을 작성하시오.

입력 예) 100
출력 예) 5050
*/

#include <stdio.h>

int sum(int n)
{
	if (n <= 1)
		return 1;
		
	return n + sum(n - 1);	
}

int main()
{
	int N = 0;
	while (1)
	{
		scanf("%d", &N);
		if (N <= 0 || N > 100)
		{
			printf("100 이하의 자연수를 다시 입력 해주세요.\n");
			continue;
		}
		break;
	}
	printf("%d", sum(N));
	
	return 0;
}