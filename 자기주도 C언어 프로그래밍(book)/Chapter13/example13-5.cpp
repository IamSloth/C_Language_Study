/***************************************************

자기주도 C언어 프로그래밍
Page274, example 13-5

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
50 이하의 자연수 N을 입력받아 재귀호출을 이용하여
피보나치 수열에서 N번째 수를 출력하는 프로그램을 작성하시오
피보나치 수열이란 첫 번째와 두 번째 수는 1이고 세 번째 수부터는 바로 앞 두수의 합으로 구성된 수열이다.

입력 예) 7
출력 예) 13
*/

#include <stdio.h>

int output(int n)
{
	if (n <= 2)
		return 1;

	return output(n - 1) + output(n - 2);
}

int main()
{
	int inputNum;
	scanf("%d", &inputNum);
	printf("%d", output(inputNum));
	return 0;
}