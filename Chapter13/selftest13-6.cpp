/***************************************************

자기주도 C언어 프로그래밍
Page278, selftest 13-6

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
9자리 이하의 자연수를 입력받아
재귀함수를 이용하여 각 자리 숫자들의 제곱을 출력하는 프로그램을 작성하시오.

입력 예) 12345
출력 예) 55
*/

#include <stdio.h>

int output(int n)
{
	if (n <= 0)
		return 0;
	return (n % 10) * (n % 10) + output(n / 10);
}

int main()
{
	int inputNum;
	while (1)
	{
		scanf("%d", &inputNum);
		if (inputNum <= 0 || inputNum > 999999999)
		{
			printf("9자리 이하의 자연수를 입력하세요.\n");
			continue;
		}
		break;
	}
	
	printf("%d\n", output(inputNum));


}