/***************************************************

자기주도 C언어 프로그래밍
Page192, Assesment 9-9

This code is just for studying.
This code was written on April 1, 2022.
by IamSloth

****************************************************/


/** 문제 **
100개 이하의 정수를 입력받다가 0이 입력되면 0을 제외하고
그 때까지 입력 받은 개수를 출력한 후 
입력 받은 정수를 차례로 출력하되 그 수가 홀수이면 2배한 값을,
짝수인 경우에는 2로 나눈 몫을 출력하는 프로그램을 작성하시오.

입력 예) 8 10 5 15 100 0
출력 예) 5
		 4 5 10 30 50
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int num[100];
	int count = 0;

	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
				
		if (num[i] == 0)
		{
			break;
		}

		count++;
		
		if (num[i] % 2 == 0)
		{
			num[i] /= 2;
		}

		else
		{
			num[i] *= 2;
		}
		
	}

	printf("%d\n",count);
	for(int i = 0; i < count; i++)
	{
		printf("%d ", num[i]);
	}
	
	
	return 0;
}