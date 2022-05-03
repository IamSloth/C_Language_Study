/***************************************************

자기주도 C언어 프로그래밍
Page73, Assesment 3-4

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
두 수를 입력받아 첫 번째 수는 전치증가연산자를 사용하고
두번째 수는 후치감소연산자를 사용하여 출력하고
바뀐 값을 다시 출력하는 프로그램을 작성하시오.

입력 예) 10 15
출력 예) 11 15
		 11 14
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;

	printf("\n");

	scanf("%d %d", &i, &j);

	printf("\n");

	printf("%d %d\n", ++i, j--);
	printf("%d %d\n", i, j);
	

	printf("\n");



	return 0;
}