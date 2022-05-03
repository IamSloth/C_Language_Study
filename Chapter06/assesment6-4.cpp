/***************************************************

자기주도 C언어 프로그래밍
Page126, Assesment 6-3

This code is just for studying.
This code was written on March 23, 2022.
by IamSloth

****************************************************/

/** 문제 **
0이 입력될 때까지 정수를 계속 입력받아 3의 배수와 5의 배수를 제외한 수들의 개수를
출력하는 프로그램을 작성하시오.

입력 예) 1 2 3 4 5 6 7 8 9 10 0
출력 예) 5
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int count = 0;
	
	while (1)
	{
		scanf("%d", &inputNum);

		if (inputNum == 0 )
		{
			printf("%d\n", count);
			break;
		}

		else if((inputNum % 3) != 0 && (inputNum % 5) != 0)
		{
			count++;
		}
	}

	printf("\n");

	return 0;
}