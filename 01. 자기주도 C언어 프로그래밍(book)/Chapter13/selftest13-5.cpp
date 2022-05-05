/***************************************************

자기주도 C언어 프로그래밍
Page276, selftest 13-5

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
첫 번째 수는 1이고 N번째 수는 (N/2)번째 수와 (N-1)번째 합으로 구성된 수열이 있다.
50 이하의 자연수 N을 입력받아 재귀호출을 이용하여 이 수열에서 N번째 수를 출력하는 프로그램을 작성하시오.

입력 예) 8
출력 예) 18
*/

#include <stdio.h>

int output(int n)
{
	if (n <= 1)
		return 1;

	return output(n / 2) + output(n - 1);
}

int main()
{
	int input;
	while (1)
	{
		scanf("%d", &input);
		if (input <= 0 || input > 50)
		{
			printf("50 이하의 자연수 N을 입력하세요.\n");
			continue;
		}
		break;
	}

	printf("%d",output(input));
	return 0;
}