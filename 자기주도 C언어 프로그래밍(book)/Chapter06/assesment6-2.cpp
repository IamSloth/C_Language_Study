/***************************************************

자기주도 C언어 프로그래밍
Page126, Assesment 6-2

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
정수를 입력받다가 0이 입력되면
그 때까지 입력받은 홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.

입력 예) 9 7 10 5 33 65 0
출력 예) odd : 5
		 even : 1
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int oddCount = 0;
	int evenCount = 0;

	

	while (1)
	{
		scanf("%d", &inputNum);

		if (inputNum == 0)
		{
			printf("odd : %d\n", oddCount);
			printf("even : %d\n", evenCount);
			break;
		}

		else if (inputNum % 2 == 0)
		{
			evenCount++;
		}

		else if (inputNum % 2 != 0)
		{
			oddCount++;
		}
	}

	printf("\n");

	return 0;
}