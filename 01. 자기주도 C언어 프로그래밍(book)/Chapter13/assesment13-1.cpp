/***************************************************

자기주도 C언어 프로그래밍
Page279, assesment 13-1

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수 N을 입력받아 1부터 N까지 출력을 하되 n-1 번째는 n을 2로 나눈 몫이 되도록 하는 프로그램을 작성하시오.

입력 예) 100

출력 예) 1 3 6 12 25 50 100

*/

#include <stdio.h>
void function(int n)
{
	if (n <= 0)
		return;
	function(n / 2);
	printf("%d ", n);
}

int main()
{
	int input = 0;
	scanf("%d", &input);
	function(input);
}

