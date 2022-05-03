/***************************************************

자기주도 C언어 프로그래밍
Page179, Self Test 9-5

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
1반부터 6반까지의 평균점수를 저장한 후,
두 반을 입력받아 두 반의 평균점수의 합을 출력하는 프로그램을 작성하시오.
반별 평균점수는 초기값으로부터 1반부터 차례로 "85.6 79.5 83.1 80.0 78.2 75.0"으로
초기화하고 출력은 소수 첫째자리까지 한다.

입력 예) 1 3
출력 예) 168.7

*/


#include <stdio.h>

int main()
{
	printf("\n");

	float classAvg[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	int classNum = 0;
	float sum = 0;
	float avg = 0;

	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &classNum);
		sum += classAvg[classNum - 1];
	}
	printf("%.1f", sum);

	printf("\n");

	return 0;
}