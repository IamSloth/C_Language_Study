/***************************************************

자기주도 C언어 프로그래밍
Page270, example 13-4

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
10 이하의 자연수 N을 입력받아 주사위를 N번 던져서 나올 수 있는
모든 경우를 출력하는 프로그램을 작성하시오.

입력 예) 3
출력 예) 1 1 1
		 1 1 2
		 1 1 3
		 1 1 4
		 1 1 5
		 1 1 6
		 1 2 1
		 …
		 6 6 6

*/

#include <stdio.h>

int arr[20];
int inputNum;

void dice(int n)
{
	for (int i = 1; i <= 6; i++)
	{
		arr[n] = i;
		
		if (n > inputNum)
		{
			for (int i = 1; i <= inputNum; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
			return;
		}

		dice(n + 1);
	}

	
}

int main()
{
	scanf("%d", &inputNum);
	dice(1);
	return 0;
}