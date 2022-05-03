/***************************************************

자기주도 C언어 프로그래밍
Page279, assesment 13-2

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수 N을 입력받아
N이 홀수인 경우에는 1부터 N까지의 홀수를,
짝수인 경우는 2부터 N까지의 짝수를
모두 출력하는 프로그램을 재귀함수로 작성하시오.

입력 예) 15

출력 예) 1 3 5 7 9 11 13 15

*/

#include <stdio.h>
void function(int n)
{
	if (n <= 0)
		return;

	function(n - 2);
	printf("%d ", n);
}

int main()
{
	int input = 0;
	scanf("%d", &input);
	function(input);
}

