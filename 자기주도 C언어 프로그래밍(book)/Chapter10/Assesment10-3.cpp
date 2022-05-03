/***************************************************

자기주도 C언어 프로그래밍
Page211, Assesment 10-3

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
10 미만의 자연수 두 개를 입력받아서 첫 번째 항과 두 번째 항을 입력받은 수로 초기화시킨 후
세 번째 항부터는 전전항과 전항의 합을 구하여 그 합의 1의 자리로 채워서
차례로 10개를 출력하는 프로그램을 작성하시오.

입력 예) 3 5

출력 예) 3 5 8 3 1 4 5 9 4 3
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int outputNum[11] = { 0 };

	while (1)
	{
		scanf("%d %d", &outputNum[1],&outputNum[2]);
		if (outputNum[1] < 0 || outputNum[1] >= 10 && outputNum[2] < 0 || outputNum[2] >= 10)
		{
			printf("10미만의 자연수가 아닙니다!\n");
			continue;
		}
		break;
	}

	for (int i = 1; i <= 10; i++)
	{
		if(i >= 3)
			outputNum[i] = (outputNum[i - 1] + outputNum[i - 2]) % 10;

		printf("%d ", outputNum[i]);
		
	}

	return 0;
}