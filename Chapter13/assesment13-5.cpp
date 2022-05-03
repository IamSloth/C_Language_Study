/***************************************************

자기주도 C언어 프로그래밍
Page280, assesment 13-5

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
100만 이하의 자연수 N을 입력받아 짝수이면 2로, 홀수이면 3으로 나누는 작업을 반복하다가
그 값이 1이 되면 그때까지 나누었던 작업의 횟수를 출력하는 프로그램을 재귀함수로 작성하시오.

입력 예) 100

출력 예) 6

*/

#include <stdio.h>
int count = 0;
int function(int n)
{
	
	if (n == 1)
		return count;
	if (n % 2 == 0)
	{
		count++;
		return function(n / 2);		
	}

	else
	{
		count++;
		return function(n / 3);		
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", function(N));
	return 0;
}

