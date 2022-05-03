/***************************************************

자기주도 C언어 프로그래밍
Page261, assesment 12-4

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 n을 입력받아 2^n의 값을 출력하는 프로그램을 작성하시오. (1 <= n <= 20)

입력 예) 10

출력 예) 1024

*/

#include <stdio.h>
#include <math.h>

int main()
{
	int inputNum;
	scanf("%d", &inputNum);

	printf("%.0f\n", pow(2,inputNum));

	return 0;
}

