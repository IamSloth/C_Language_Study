/***************************************************

자기주도 C언어 프로그래밍
Page56, Example 3-1

This code is just for studying.
This code was written on March 11, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 개의 정수를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.

입력 예) 두 개의 수를 입력하시오. 7 5
출력 예) 7 + 5 = 12
		 7 - 5 = 2
		 7 * 5 = 12
		 7 / 5 = 2
		 7 % 5 = 12
*/

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	printf("두 개의 수를 입력하십시오. \n");
	scanf("%d%d", &a, &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);



	return 0;
}