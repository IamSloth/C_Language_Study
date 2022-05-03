/***************************************************

자기주도 C언어 프로그래밍
Page58, Self Test 3-1

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
세 개의 정수를 입력 받아서 합계와 평균을 출력하는 프로그램을 작성하시오.
(단, 평균은 소수 이하를 버리고 정수부분만 출력한다.)

입력 예) 10 25 33
출력 예) sum : 68
		 ave : 22
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;

	printf("\n");

	scanf("%d %d %d", &i, &j, &k);
	
	printf("\n");

	printf("sum : %d\n", i+j+k);
	printf("avg : %d\n", (i+j+k)/3);

	printf("\n");


	return 0;
}