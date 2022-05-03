/***************************************************

자기주도 C언어 프로그래밍
Page200, Selftest 10-3

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
100 이하의 자연수를 입력받아 첫 번째 항은 100으로 두 번째 항은 입력받은 수로 초기화하고
다음 항부터는 전전항에서 전항을 뺀 수로 채워나가는 수열을 작성하여
그 수가 음수가 나올 때까지 출력하는 프로그램을 작성하시오.

입력 예) 62
출력 예) 100 62 38 24 14 10 4 6 -2
*/


#include <stdio.h>

int main()
{
	printf("\n");

	
	int outputNum[50] = {0,100,};

	
	while (1)
	{
		scanf("%d", &outputNum[2]);
		if (outputNum[2] > 100 || outputNum[2] < 0)
			continue;
		else
			break;
	}
	int count = 0;
	for (int i = 3; ; i++)
	{
		outputNum[i] = outputNum[i - 2] - outputNum[i - 1];
			
		if (outputNum[i] < 0)
		{
			count = i;
			break;
		}
	}

	for (int i = 1; i <= count; i++)
	{
		printf("%d ", outputNum[i]);
	}



	return 0;
}