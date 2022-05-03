

/***************************************************

자기주도 C언어 프로그래밍
Page151, Self Test 8-1

This code is just for studying.
This code was written on March 29, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수 n을 입력받고 1부터 홀수를 차례대로 더해 나가면서 합이 n 이상이면
그 때까지 더해진 홀수의 개수와 그 합을 출력하는 프로그램을 작성하시오.

입력 예) 100
출력 예) 10 100
*/


#include <stdio.h>

int main()
{

	printf("\n");

	int n = 0;
	int sum = 0;
	int oddCount = 0;
	scanf("%d", &n);

	for (int i = 1; n > sum; i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
			oddCount++;
		}
	}

	printf("%d %d", oddCount, sum);

	printf("\n");

	return 0;
}