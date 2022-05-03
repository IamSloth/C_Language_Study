/***************************************************

자기주도 C언어 프로그래밍
Page150, Example 8-1

This code is just for studying.
This code was written on March 30, 2022.
by IamSloth

****************************************************/


/** 문제 **
1부터 차례로 누적하여 합을 구하다가 합이 입력받은 수를 넘으면 중단하고
마지막으로 더해진 값과 그 때까지의 합을 출력하는 프로그램을 작성하시오.

입력 예) 1000
출력 예) 45 1035
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int num = 1;
	int sum = 0;

	scanf("%d", &inputNum);

	while (1)
	{
		sum += num;
		
		if (sum > inputNum)
		{
			printf("%d %d", num, sum);
			break;
		}

		num++;
	}

	return 0;
}