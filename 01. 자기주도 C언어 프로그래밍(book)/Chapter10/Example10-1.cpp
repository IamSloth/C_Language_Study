/***************************************************

자기주도 C언어 프로그래밍
Page194, Example 10-1

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** 문제 **
1부터 10까지의 정수를 입력받다가 입력된 정수가 범위를 벗어나면
그 때까지 1번 이상 입력된 각 숫자의 개수를 작은 수부터 출력하는
프로그램을 작성하시오.

입력 예) 5 6 10 9 3 5 3 5 0
출력 예) 3: 2개
		 5: 3개
		 6: 1개
		 9: 1개
		 10: 1개
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int count[11] = { 0 };

	while (1)
	{
		scanf("%d", &inputNum);

		if (inputNum < 1 || inputNum > 10)
		{
			break;
		}

		else
		{
			count[inputNum]++;
		}
	}

	for (int i = 1; i < 10; i++)
	{
		if (count[i] != 0)
		{
			printf("%d: %d개\n", i, count[i]);
		}
	}


	printf("\n");

	return 0;
}