/***************************************************

자기주도 C언어 프로그래밍
Page276, example 13-6

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
9자리 이하의 자연수를 입력받아
재귀함수를 이용하여 각 자리 숫자들의 합을 출력하는 프로그램을 작성하시오.

입력 예) 123456780
출력 예) 36
*/

#include <stdio.h>

int output(int n)
{
	if (n <= 0)
		return 0;
	return n%10 + output(n/10);
}

int main()
{
	int input;
	while (1)
	{
		scanf("%d", &input);
		if (input <= 0 || input > 999999999)
		{
			printf("9자리 이하의 자연수 N을 입력하세요.\n");
			continue;
		}
		break;
	}

	printf("%d\n", output(input));
	return 0;
}