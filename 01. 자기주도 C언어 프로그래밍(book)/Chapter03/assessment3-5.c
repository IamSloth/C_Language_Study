/***************************************************

자기주도 C언어 프로그래밍
Page73, Assesment 3-5

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
민수와 기영기의 키와 몸무게를 입력받아 민수가 키도 크고 몸무게도 크면 1,
그렇지 않으면 0을 출력하는 프로그램을 작성하시오.

입력 예) 150 35
		 145 35

출력 예) 0
*/

#include <stdio.h>

int main()
{
	int height1 = 0, height2 = 0;
	int weight1 = 0, weight2 = 0;

	printf("\n");

	scanf("%d %d\n", &height1, &weight1);
	scanf("%d %d", &height2, &weight2);

	printf("\n");

	printf("%d\n", (height1 > height2) && (weight1 > weight2));
	

	printf("\n");



	return 0;
}